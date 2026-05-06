/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:06:13 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:05 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a pointer to a new string which is a duplicate of the string s.
 * Memory for the new string is obtained with malloc(3), and can be freed with
 * free(3).
 * 
 * @param s The string to be duplicated.
 * @return A pointer to the duplicated string, or NULL if insufficient memory
 * was available.
 */
char	*ft_strdup(const char *s)
{
	char	*p_s;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	p_s = (char *)ft_calloc(len + 1, 1);
	if (!p_s)
		return (NULL);
	while (s[i] != '\0')
	{
		p_s[i] = s[i];
		i++;
	}
	p_s[i] = '\0';
	return (p_s);
}
/* 
int	main(void)
{
	char	s[] = "Hello, World!";

	printf ("%s\n", ft_strdup(s));
} */
