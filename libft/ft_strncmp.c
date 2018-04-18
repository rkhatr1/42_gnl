/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 11:21:26 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/12 23:55:54 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char copy_src1;
	unsigned char copy_src2;

	while (n-- > 0)
	{
		copy_src1 = (unsigned char)*str1++;
		copy_src2 = (unsigned char)*str2++;
		if (copy_src1 != copy_src2)
			return (copy_src1 - copy_src2);
		if (copy_src1 == '\0')
			return (0);
	}
	return (0);
}
