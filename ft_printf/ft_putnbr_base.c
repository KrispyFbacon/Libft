/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:07:03 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:00 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Prints an unsigned integer in a given base.
 * 
 * @param n The unsigned integer to print.
 * @param base The base to print the integer in.
 * @param digits The digits to use for the base.
 * @return The number of characters printed.
 */
int	ft_putnbr_base(unsigned int n, unsigned int base, char *digits)
{
	int	len;

	len = 0;
	if (n >= base)
		len = len + ft_putnbr_base(n / base, base, digits);
	write (1, &digits[n % base], 1);
	len++;
	return (len);
}
/* 
int	main(void)
{
	int				count;
	unsigned int	n = 42;
	unsigned int	base = 16;
	char			*digits = "0123456789abcdef";

	count = ft_putnbr_base(n, base, digits);
	printf("\nCount Mine: %d\n", count);
}*/