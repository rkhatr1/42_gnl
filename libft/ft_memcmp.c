/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 13:41:01 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:58:50 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *str1_cpy;
	unsigned char *str2_cpy;

	str1_cpy = (unsigned char *)str1;
	str2_cpy = (unsigned char *)str2;
	while ((int)n > 0)
	{
		n--;
		if (*str1_cpy == *str2_cpy)
		{
			str1_cpy++;
			str2_cpy++;
		}
		else
			return (*str1_cpy - *str2_cpy);
	}
	return (0);
}
