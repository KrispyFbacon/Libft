/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:53:22 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:21 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

/**
 * @brief Writes an unsigned integer as a hexadecimal number to the given file
 * descriptor.
 * 
 * @param n The unsigned integer to write.
 * @param c The case of the hexadecimal letters ('x' for lowercase, 'X' for
 * uppercase).
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_puthex_fd(unsigned int n, char c, int fd)
{
	char	*base;
	int		result;

	result = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		result += ft_puthex_fd((n / 16), c, fd);
		result += ft_puthex_fd((n % 16), c, fd);
	}
	else
		result += write (fd, &base[n], 1);
	return (result);
}
