/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:26:10 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:06:59 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string 's' to the given file descriptor, followed by a
 * newline.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char	s[] = "Hello, World!";

	ft_putendl_fd(s, 1);
} */
