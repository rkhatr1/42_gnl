/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 13:37:21 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:55:05 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (str1 < str2)
	{
		while (i < len)
		{
			*((char *)str1 + i) = *((char *)str2 + i);
			i++;
		}
	}
	else
	{
		while (len)
		{
			*((char *)str1 + len - 1) = *((char *)str2 + len - 1);
			len--;
		}
	}
	return (str1);
}
