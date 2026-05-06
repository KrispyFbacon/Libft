/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:43:21 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:07 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to size - 1 characters from the NUL-terminated string src to
 * dst, NUL-terminating the result.
 * 
 * @param dest The destination string.
 * @param src The source string.
 * @param size The total size of the destination buffer.
 * @return The total length of the string it tried to create: the length of
 * src.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/* 
int	main(void)
{
	const char	src[]= "Hello";
	char		dest[100];
	size_t		len;

	len = ft_strlcpy(dest, src, 4);
	printf("%zu\n", len);
	printf("%s\n", dest);
} */
