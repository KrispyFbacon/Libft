/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:34:44 by frbranda          #+#    #+#             */
/*   Updated: 2024/04/23 17:07:07 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into the
 * ASCII character set.
 * 
 * @param c The character to be checked.
 * @return 1 if c is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
