/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:36:40 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:27:43 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = lstnew(f(lst->content));
		else
			new_node = lstnew(lst->content);
		if (!new_node)
		{
			lstclear(&new_list, del);
			return (NULL);
		}
		lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
