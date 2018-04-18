/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 13:03:41 by rkhatri           #+#    #+#             */
/*   Updated: 2018/04/18 15:48:37 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int					read_line(int fd, char **str, char **line)
{
	int				i;
	char			*tmp;

	i = 0;
	while ((str[fd][i] != '\n') && (str[fd][i]))
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		tmp = ft_strdup(str[fd] + i + 1);
		ft_strdel(&str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	int				val;
	char			*tmp;
	char			buffer[BUFF_SIZE + 1];
	static char		*str[1024];

	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buffer, 0))
		return (-1);
	while ((val = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[val] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(BUFF_SIZE);
		tmp = ft_strjoin(str[fd], buffer);
		ft_strdel(&str[fd]);
		str[fd] = tmp;
		ft_bzero(buffer, BUFF_SIZE);
	}
	if (val > 0)
		return (-1);
	else if (!val && (str[fd] == NULL || str[fd] == 0))
		return (0);
	return (read_line(fd, str, line));
}
