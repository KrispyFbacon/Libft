/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:38:28 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:08:54 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter.
 * 
 * @param c The character to be converted.
 * @return The converted letter, or c if the conversion was not possible.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* 
int	main(void)
{
	int	c;

	c = 'A';
	printf("%c\n", ft_tolower(c));
	return (0);
} */
