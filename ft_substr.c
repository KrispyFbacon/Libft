/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:55:17 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:08:53 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string
 * 's'. The substring begins at index 'start' and is of maximum size 'len'.
 * 
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	j;
	size_t	i;

	j = 0;
	i = start;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs || !s)
		return (NULL);
	while (s[i] != '\0' && i < len + start)
	{
		subs[j] = s[i];
		i++;
		j++;
	}
	subs[j] = '\0';
	return (subs);
}
/* 
int	main(void)
{
	printf ("%s\n", ft_substr("abcde", 2, 5));
}  */