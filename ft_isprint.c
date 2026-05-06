/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:36:20 by frbranda          #+#    #+#             */
/*   Updated: 2024/04/28 16:02:22 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks for any printable character including space.
 * 
 * @param c The character to be checked.
 * @return 1 if c is a printable character, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
