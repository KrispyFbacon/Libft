/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:53:27 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:25 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

/**
 * @brief Writes an integer to the given file descriptor.
 * 
 * @param n The integer to write.
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_putnbr_fd_pf(int n, int fd)
{
	int		length;
	char	*num;

	length = 0;
	num = ft_itoa(n);
	length = ft_putstr_fd_pf(num, fd);
	free(num);
	return (length);
}
