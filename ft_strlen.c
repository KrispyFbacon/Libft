/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:37:34 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:08 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of the string s, excluding the terminating
 * null byte ('\0').
 * 
 * @param s The string whose length is to be found.
 * @return The number of bytes in the string s.
 */
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*s;

	s = "Hello ";
	printf("%d", ft_strlen(c));
}*/
