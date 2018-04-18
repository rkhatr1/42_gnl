/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:59:54 by rkhatri           #+#    #+#             */
/*   Updated: 2018/03/08 23:13:18 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t num_words;
	size_t is_start;

	num_words = 0;
	is_start = 0;
	while (*s)
	{
		if (*s != c && is_start == 0)
		{
			is_start = 1;
			num_words++;
		}
		if (*s == c && is_start == 1)
		{
			is_start = 0;
		}
		s++;
	}
	return (num_words);
}

static size_t	count_len(char const *s, size_t *index, char c)
{
	size_t len;

	len = 0;
	while (s[*index] == c)
	{
		(*index)++;
	}
	while (s[*index] != c && s[*index])
	{
		len++;
		(*index)++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;
	size_t	num_words;
	size_t	num_chars;

	if (!s)
		return ((void *)0);
	num_words = count_words(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (num_words + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_words && j < ft_strlen(s))
	{
		num_chars = count_len(s, &j, c);
		if (!(str[i] = (char *)malloc(sizeof(char) * (num_chars + 1))))
			return (NULL);
		ft_strncpy(str[i], s + (j - num_chars), num_chars);
		str[i][num_chars] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
