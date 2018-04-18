/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 13:38:37 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:55:14 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	char			*x_str;

	x_str = (char *)str;
	x = (unsigned char)c;
	if (!n)
		return (NULL);
	if ((sizeof(str) / n) == sizeof(char *))
		return (((void *)ft_strchr(x_str, c)));
	else
	{
		i = 0;
		while (i < n)
		{
			if (((unsigned char *)str)[i] == x)
				return (((unsigned char *)str + i));
			i++;
		}
		return (NULL);
	}
}
