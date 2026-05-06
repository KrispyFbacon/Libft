/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:51:05 by frbranda          #+#    #+#             */
/*   Updated: 2024/05/11 12:25:48 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the element 'new' at the end of the list.
 * 
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)-> next = new;
}
