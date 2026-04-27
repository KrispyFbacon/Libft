/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:24:25 by frbranda          #+#    #+#             */
/*   Updated: 2024/06/06 14:09:19 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	verify_nl(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*p_s;

	p_s = (char *)s;
	while (n > 0)
	{
		*p_s = 0;
		p_s++;
		n--;
	}
}

void	gnl_delete_buffer(char *buffer)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
	{
		ft_bzero(buffer, BUFFER_SIZE);
		return ;
	}
	i++;
	while (buffer[i] != '\0')
	{
		buffer[j] = buffer[i];
		j++;
		i++;
	}
	ft_bzero(buffer + j, BUFFER_SIZE - j);
}

char	*return_at_end(char *line)
{
	if (*line)
		return (line);
	free(line);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*buffer = NULL;
	char		*line;
	int			read_byte;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	line = gnl_strdup_nl("");
	if (!buffer)
		buffer = (char *)gnl_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (verify_nl(buffer) == 0)
	{
		line = gnl_strjoin_nl(line, buffer);
		read_byte = read(fd, buffer, BUFFER_SIZE);
		if (read_byte <= 0)
		{
			free(buffer);
			buffer = NULL;
			return (return_at_end(line));
		}
		buffer[read_byte] = '\0';
	}
	line = gnl_strjoin_nl(line, buffer);
	gnl_delete_buffer(buffer);
	return (line);
}
/* 
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test2.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("\n%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free (line);
	}
	close(fd);
	return (0);
} */
/* 
#include <stdio.h>
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	fd1 = open("test1.txt", O_RDONLY);
	i = 1;
	printf("Buffer size > %d\n", BUFFER_SIZE);
	line = get_next_line(fd1);
	while (line != 0)
	{
		printf("line [%02d]:%s", i, line);
		free(line);
		line = get_next_line(fd1);
		i++;
	}
	close(fd1);
	return (0);
} */
