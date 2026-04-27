/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:55:51 by frbranda          #+#    #+#             */
/*   Updated: 2024/06/06 13:12:33 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*buffer[4096];
	char		*line;
	int			read_byte;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	line = gnl_strdup_nl("");
	if (!buffer[fd])
		buffer[fd] = (char *)gnl_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (verify_nl(buffer[fd]) == 0)
	{
		line = gnl_strjoin_nl(line, buffer[fd]);
		read_byte = read(fd, buffer[fd], BUFFER_SIZE);
		if (read_byte <= 0)
		{
			free(buffer[fd]);
			buffer[fd] = NULL;
			return (return_at_end(line));
		}
		buffer[fd][read_byte] = '\0';
	}
	line = gnl_strjoin_nl(line, buffer[fd]);
	gnl_delete_buffer(buffer[fd]);
	return (line);
}

/* 
 #include <stdio.h>
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	i = 1;
	while (i < 4)
	{
		line = get_next_line(fd1);
		if (line != NULL)
			printf("t1-line [%02d]: %s", i, line);
		else
			printf("t1-line [%02d]: %s\n", i, line);
		free(line);
		line = get_next_line(fd2);
		if (line != NULL)
			printf("t2-line [%02d]: %s", i, line);
		else
			printf("t2-line [%02d]: %s\n", i, line);
		free(line);
		line = get_next_line(fd3);
		if (line != NULL)
			printf("t3-line [%02d]: %s", i, line);
		else
			printf("t3-line [%02d]: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
} */

/* 
 #include <stdio.h>
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	i = 1;
	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	printf ("NEXT TEST!\n");
	i = 1;
	while ((line = get_next_line(fd2)) != NULL)
	{
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	printf ("NEXT TEST!\n");
	i = 1;
	while ((line = get_next_line(fd3)) != NULL)
	{
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
} */