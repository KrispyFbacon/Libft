/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:38:52 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:08:55 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 * 
 * @param c The character to be converted.
 * @return The converted letter, or c if the conversion was not possible.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 'a';
	printf("%c\n", ft_toupper(c));
}*/
