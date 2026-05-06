/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:53:35 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:22 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

static int	ft_putpointerhex_fd(unsigned long n, int fd)
{
	char	*base;
	int		result;

	result = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		result += ft_putpointerhex_fd(n / 16, fd);
		result += ft_putpointerhex_fd(n % 16, fd);
	}
	else
		result += write (fd, &base[n], 1);
	return (result);
}

/**
 * @brief Writes a pointer address to the given file descriptor.
 * 
 * @param n The pointer to write.
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_putptr_fd(void *n, int fd)
{
	int				result;
	unsigned long	nbr;

	nbr = (unsigned long)n;
	result = 0;
	if (!nbr)
	{
		write(fd, "(nil)", 5);
		return (5);
	}
	result += ft_putstr_fd_pf("0x", fd);
	if (nbr == 0)
		result += ft_putchar_fd_pf(0, fd);
	else
		result += ft_putpointerhex_fd(nbr, fd);
	return (result);
}
