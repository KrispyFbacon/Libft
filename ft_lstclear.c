/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:56:04 by frbranda          #+#    #+#             */
/*   Updated: 2024/05/11 14:30:24 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given element and every successor of that
 * element, using the function 'del' and free. Finally, the pointer to the list
 * must be set to NULL.
 * 
 * @param lst The address of a pointer to an element.
 * @param del The address of the function used to delete the content of the
 * element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
