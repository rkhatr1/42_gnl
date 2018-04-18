/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 12:57:21 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:53:39 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;
	size_t len;

	len = ft_strlen(str);
	i = len;
	while (i > 0 && str[i] != (char)c)
		--i;
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}
