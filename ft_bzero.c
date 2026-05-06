/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:22:10 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:43:25 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief Writes n zeroed bytes to the string s.
 * 
 * @param s The string to be zeroed.
 * @param n The number of bytes to be zeroed.
 */
void	ft_bzero(void *s, size_t n)
{
	char	*p_s;

	p_s = (char *)s;
	while (n > 0)
	{
		*p_s = 0;
		p_s++;
		n--;
	}
}
/*
int	main(void)
{
	char	s[] = "Hello,World!";

	ft_bzero(s, 2);
	printf ("%s\n", s);
}*/
/*
int	main(void)
{
	char	s[] = "Hello,World!";
	char *ok = &s[5];

	ft_bzero(s, 4);
	printf ("%s\n", ok);
}*/
