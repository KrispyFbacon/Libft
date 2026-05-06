/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:35:00 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:04 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of c (converted to a char) in the string
 * pointed to by s. The terminating null character is considered to be part of
 * the string; therefore if c is '\0', the functions locate the terminating
 * '\0'.
 * 
 * @param s The string to be scanned.
 * @param c The character to be searched.
 * @return A pointer to the located character, or NULL if the character does
 * not appear in the string.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = c % 256;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
/* 
int	main(void)
{
	const char	s[] = "Hello World";
	int	c;

	c = 'o';
	printf("%s\n", ft_strchr(s, c));
}  */
