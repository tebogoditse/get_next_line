/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tditse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 10:03:47 by tditse            #+#    #+#             */
/*   Updated: 2018/07/01 13:57:29 by tditse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		eof(char *buf)
{
	int i;

	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		return (1);
	return (0);
}

int		get_next(const int fd, char *buf, char *str[fd])
{
	int		res;
	char	*temp;

	while ((eof(buf) != 1) && ((res = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[res] = '\0';
		temp = str[fd];
		str[fd] = ft_strjoin(temp, buf);
		ft_strdel(&temp);
	}
	ft_strdel(&buf);
	if (res < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				res;
	static	char	*scstr[255];
	char			*buf;
	char			*s;
	char			*temp;

	if (fd < 0 || !(line) || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (!(scstr[fd]))
		scstr[fd] = ft_strnew(0);
	if ((res = get_next(fd, buf, scstr)) == -1)
		return (-1);
	if ((s = ft_strchr(scstr[fd], '\n')))
	{
		*line = ft_strsub(scstr[fd], 0, s - scstr[fd]);
		temp = scstr[fd];
		scstr[fd] = ft_strdup(s + 1);
		ft_strdel(&temp);
		return (1);
	}
	*line = ft_strdup(scstr[fd]);
	ft_strdel(&scstr[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
