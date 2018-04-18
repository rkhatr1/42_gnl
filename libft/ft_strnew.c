/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 21:26:39 by rkhatri           #+#    #+#             */
/*   Updated: 2018/04/18 15:51:41 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str2;
	int		len;

	len = size + 1;
	str2 = (char *)ft_memalloc(len);
	ft_bzero(str2, len);
	if (!str2)
		return (NULL);
	ft_memset(str2, (int)('\0'), len);
	return (str2);
}
