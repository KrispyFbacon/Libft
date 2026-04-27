/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:17:58 by frbranda          #+#    #+#             */
/*   Updated: 2024/06/05 15:53:57 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
void	gnl_delete_buffer(char *buffer);
char	*gnl_strdup_nl(const char *s);
void	*gnl_calloc(size_t count, size_t size);
int		gnl_strlen(const char *s);
int		gnl_strlen_nl(const char *s);
char	*gnl_strjoin_nl(char *s1, char *s2);

#endif