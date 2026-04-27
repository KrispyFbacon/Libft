/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:58:00 by frbranda          #+#    #+#             */
/*   Updated: 2024/06/06 12:09:10 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*gnl_strdup_nl(const char *s)
{
	char	*p_s;
	size_t	len;
	int		i;

	i = 0;
	len = gnl_strlen_nl(s);
	p_s = (char *)gnl_calloc(len + 1, 1);
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

void	*gnl_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

int	gnl_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	gnl_strlen_nl(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		i++;
	}
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*gnl_strjoin_nl(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *) gnl_calloc((gnl_strlen(s1) + gnl_strlen_nl(s2) + 2),
			sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
		str[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && s2[i] != '\n')
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	if (s2[i] == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	free(s1);
	return (str);
}
