/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:24:14 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:07 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends the NUL-terminated string src to the end of dst. It will
 * append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
 * 
 * @param dest The destination string.
 * @param src The source string.
 * @param size The total size of the destination buffer.
 * @return The total length of the string it tried to create: the initial
 * length of dst plus the length of src.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest >= size)
		len_dest = size;
	i = len_dest;
	if (size != 0 && len_dest != size)
	{
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (len_dest + len_src);
}
/*
int	main(void)
{
	const size_t	DEST_L = 12;

	char	dest[DEST_L] = "Hello ";
	char	src[] = "World";
	size_t	len;

	len = ft_strlcat(dest, src, DEST_L);
	printf ("%zu\n", len);
	printf ("%s\n", dest);

	if (len < DEST_L)
	{
		printf ("%s\n", dest);
	}
	else
	{
		printf("ERROR");
	}
} */
