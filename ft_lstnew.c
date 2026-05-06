/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:51:17 by frbranda          #+#    #+#             */
/*   Updated: 2024/05/13 12:23:59 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a new element. The variable 'content' is
 * initialized with the value of the parameter 'content'. The variable 'next' is
 * initialized to NULL.
 * 
 * @param content The content to create the new element with.
 * @return The new element.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
