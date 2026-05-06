/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:19:22 by frbranda          #+#    #+#             */
/*   Updated: 2024/05/11 11:50:18 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of the list.
 * 
 * @param lst The beginning of the list.
 * @return The last element of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
