/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:49:45 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 22:51:09 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str2 = ft_strnew((size_t)ft_strlen((char const *)s));
	if (!str2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str2[i] = f(i, s[i]);
		i++;
	}
	return (str2);
}
