/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:21:58 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:50:58 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str1[len] != '\0')
		len++;
	while ((str2[i] != '\0') && (i < n))
	{
		str1[len] = str2[i];
		len++;
		i++;
	}
	str1[len] = '\0';
	return (str1);
}
