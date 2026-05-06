/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:48:09 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:15 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a character to the given file descriptor.
 * 
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_putchar_pf(char c, int fd)
{
	int	count;

	write(fd, &c, 1);
	count = 1;
	return (count);
}
/* int	main(void)
{
	int	count;
	
	count = ft_putchar_pf('A', 1);
	printf ("\n%d", count);
} */