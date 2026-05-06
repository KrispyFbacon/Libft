/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:16:27 by frbranda          #+#    #+#             */
/*   Updated: 2024/04/29 11:06:58 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares the first n bytes of memory area s1 and memory area s2.
 * 
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of bytes to be compared.
 * @return An integer less than, equal to, or greater than zero if the first n
 * bytes of s1 is found, respectively, to be less than, to match, or be greater
 * than the first n bytes of s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "Hello";

	printf("%d\n", memcmp(s1, s2, 10));
	return (0);
} */
