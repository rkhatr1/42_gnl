/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 10:33:17 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/09 11:02:35 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *n_link;

	n_link = (t_list *)malloc(sizeof(t_list) * content_size);
	if (!n_link)
		return (NULL);
	if (!content)
	{
		(*n_link).content = NULL;
		(*n_link).content_size = 0;
	}
	else
	{
		if (!((*n_link).content = malloc(sizeof(content))))
			return (NULL);
		(*n_link).content = ft_memcpy((n_link->content), content, content_size);
		n_link->content_size = content_size;
	}
	(*n_link).next = NULL;
	return (n_link);
}
