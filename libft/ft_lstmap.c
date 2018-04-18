/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 10:58:28 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/09 11:03:54 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_link;
	t_list	*root_link;

	root_link = NULL;
	if (!lst)
		return (NULL);
	new_link = f(lst);
	root_link = new_link;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new_link->next = f(lst)))
		{
			free(lst->next);
			return (NULL);
		}
		new_link = new_link->next;
	}
	return (root_link);
}
