/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:24:14 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:06 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of 's1' and 's2'.
 * 
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str || (!s1 && !s2))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/* 
int	main(void)
{
	printf("%s\n", ft_strjoin("Hello, ", "World!"));
}
 */