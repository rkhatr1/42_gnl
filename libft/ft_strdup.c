/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:40:17 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 20:51:24 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	i;
	size_t	len;
	char	*str2;

	i = 0;
	len = ft_strlen(str1) + 1;
	str2 = (char *)malloc(sizeof(*str1) * (len));
	if (!str2)
		return (NULL);
	while (i < len)
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
