/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:50:22 by frbranda          #+#    #+#             */
/*   Updated: 2024/04/30 12:34:18 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of count elements of size bytes each and
 * returns a pointer to the allocated memory. The memory is set to zero.
 * 
 * @param count The number of elements to be allocated.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size)
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
/* 
int	main(void)
{
	printf("%s\n", (char *)ft_calloc(5, 6));
	printf("%s\n", (char *)calloc(5, 6));
	return (0);
} */
