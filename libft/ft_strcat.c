/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:56:32 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/12 23:12:53 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int	i;
	int new;

	i = 0;
	new = 0;
	while (str1[new] != '\0')
		new++;
	while (str2[i] != '\0')
	{
		str1[new] = str2[i];
		new++;
		i++;
	}
	str1[new] = '\0';
	return (str1);
}
