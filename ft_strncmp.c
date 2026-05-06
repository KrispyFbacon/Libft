/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:38:04 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:09 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares not more than n characters. Because ft_strncmp() is designed
 * for comparing strings rather than binary data, characters that appear after
 * a `\0` character are not compared.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n The maximum number of characters to be compared.
 * @return An integer greater than, equal to, or less than 0, according as the
 * string s1 is greater than, equal to, or less than the string s2.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Hello,";
	char	s2[] = "Hello, World!";

	printf ("%d\n", ft_strncmp(s1, s2, 8));
	return (0);
}*/
