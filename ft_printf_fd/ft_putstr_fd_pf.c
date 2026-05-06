/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:53:41 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:26 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

void	ft_printstr_fd( char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

#include "ft_printf_fd.h"

/**
 * @brief Writes a string to the given file descriptor.
 * 
 * @param str The string to write.
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_putstr_fd_pf(char *str, int fd)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_printstr_fd("(null)", fd);
		return (6);
	}
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	return (i);
}
