/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:39:44 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:51:15 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *str1, const char *str2, size_t len)
{
	size_t i;

	i = 0;
	while ((str2[i] != '\0') && i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	while (i < len)
	{
		str1[i] = '\0';
		i++;
	}
	return (str1);
}
