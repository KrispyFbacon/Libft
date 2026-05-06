/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:48:59 by frbranda          #+#    #+#             */
/*   Updated: 2026/05/06 14:07:10 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the null-terminated string little in
 * the string big, where not more than len characters are searched. Characters
 * that appear after a `\0` character are not searched.
 * 
 * @param big The string to be scanned.
 * @param little The string to be searched.
 * @param len The maximum number of characters to be searched.
 * @return If little is an empty string, big is returned; if little occurs
 * nowhere in big, NULL is returned; otherwise a pointer to the first character
 * of the first occurrence of little is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
/* 
#include <bsd/string.h>

int	main(void)
{
	char	*big = "Hello WWorld World my name is Bacon";
	char	*little = "World";
	size_t	n = 16;

	printf ("%s\n", ft_strnstr(big, little, n));
	printf ("%s\n", strnstr(big, little, n));
} */
