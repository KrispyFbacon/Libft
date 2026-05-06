/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:44:42 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:18 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a string to the given file descriptor.
 * 
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 * @return The number of characters written.
 */
int	ft_putstr_pf(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	return (i);
}
/* 
int	main(void)
{
	char	s[] = "Hello, World!";

	printf ("\n%d", ft_putstr_fd(s, 1));
} */
