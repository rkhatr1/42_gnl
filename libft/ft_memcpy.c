/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 13:29:02 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:54:47 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0 || (str1 == str2))
		return (str1);
	while (i < n)
	{
		((char *)str1)[i] = ((char *)str2)[i];
		i++;
	}
	*(char *)str1 = *(char *)str2;
	return (str1);
}
