/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 13:36:24 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:54:55 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1_org;
	unsigned char	*str2_org;
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	if (str1 == str2)
		return (str1);
	str1_org = (unsigned char *)str1;
	str2_org = (unsigned char *)str2;
	while (i < n)
	{
		str1_org[i] = str2_org[i];
		if (str2_org[i] == x)
			return (str1_org + i + 1);
		i++;
	}
	return ((void *)0);
}
