/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:51:59 by frbranda          #+#    #+#             */
/*   Updated: 2026/04/27 17:31:45 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings and frees the original strings.
 * 
 * @param s1 The first string to join.
 * @param s2 The second string to join.
 * @return A new string that is the result of joining s1 and s2, 
 *  or NULL on failure.
 */
char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*joined;

	if (!s1 || !s2)
	{
		ft_free(&s1);
		ft_free(&s2);
		return (NULL);
	}
	joined = ft_strjoin(s1, s2);
	ft_free(&s1);
	ft_free(&s2);
	return (joined);
}
