/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 23:04:07 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 23:13:27 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*fill_itoa(char *itoad, int nbr, int i)
{
	int sign;

	sign = 1;
	if (nbr < 0)
	{
		itoad[0] = '-';
		sign = -1;
	}
	itoad[i] = '\0';
	i--;
	if (nbr == 0)
		itoad[i] = '0';
	while (i >= 0 && nbr != 0)
	{
		itoad[i--] = sign * (nbr % 10) + '0';
		nbr /= 10;
	}
	return (itoad);
}

static int		numlength(int nbr)
{
	int		num_len;

	num_len = 0;
	if (nbr <= 0)
		num_len++;
	while (nbr != 0)
	{
		nbr /= 10;
		num_len++;
	}
	return (num_len);
}

char			*ft_itoa(int n)
{
	char	*itoad;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = numlength(n);
	itoad = (char *)malloc(sizeof(char) * (i + 1));
	if (!itoad)
		return ((void*)0);
	itoad = fill_itoa(itoad, n, i);
	return (itoad);
}
