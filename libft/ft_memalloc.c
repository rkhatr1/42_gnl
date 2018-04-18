/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 20:40:11 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:44:57 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem_loc;

	i = 0;
	mem_loc = (char *)malloc(sizeof(char) * size);
	if (!(mem_loc))
		return (NULL);
	while (i < size)
	{
		((char *)mem_loc)[i] = 0;
		i++;
	}
	(*(char *)mem_loc) = '\0';
	return (mem_loc);
}
