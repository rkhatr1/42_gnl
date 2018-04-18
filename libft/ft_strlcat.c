/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:09:54 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/13 10:22:40 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *str1, const char *str2, size_t size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (str1[i] && i < size)
		i++;
	if (size == i)
		return (size + ft_strlen(str2));
	s1_end = 0;
	while (str2[s1_end] && (size > (i + s1_end + 1)))
	{
		str1[i + s1_end] = str2[s1_end];
		s1_end++;
	}
	str1[i + s1_end] = '\0';
	if (size == (i + s1_end + 1))
	{
		while (str2[s1_end])
			s1_end++;
	}
	return (i + s1_end);
}
