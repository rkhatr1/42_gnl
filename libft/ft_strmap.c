/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:48:13 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 22:49:19 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str2;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str2 = ft_strnew(ft_strlen((const char *)s));
	if (!str2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str2[i] = f(s[i]);
		i++;
	}
	return (str2);
}
