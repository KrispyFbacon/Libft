/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:53:13 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:24 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

/**
 * @brief Writes a character to the given file descriptor.
 * 
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_putchar_fd_pf(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
