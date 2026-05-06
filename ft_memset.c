/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:53:10 by frbranda          #+#    #+#             */
/*   Updated: 2024/04/28 12:05:28 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first n bytes of the memory area pointed to by s with the
 * constant byte c.
 * 
 * @param s The memory area to be filled.
 * @param c The character to fill the memory area with.
 * @param n The number of bytes to be filled.
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[] = "Hello, World!";

	printf("%s\n", (char *)ft_memset(s, 'X', 3));
}*/
