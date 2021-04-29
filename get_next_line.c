/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 21:22:53 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/09/30 21:23:06 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	readfd(char **s_mem, int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		nbread;
	char	*s_join;

	while ((nbread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nbread] = '\0';
		if (*s_mem == NULL)
			*s_mem = ft_strdup(buf);
		else
		{
			s_join = ft_strjoin(*s_mem, buf);
			free(*s_mem);
			*s_mem = s_join;
		}
		if (*s_mem == NULL)
			return (-1);
		if (ft_strchr(*s_mem, '\n'))
			break ;
	}
	return (nbread);
}

static int	saveline(char **s_mem, char **line)
{
	int		line_len;
	char	*s_rest;

	line_len = 0;
	if (*s_mem == NULL)
		return (-1);
	while ((*s_mem)[line_len] != '\n' && (*s_mem)[line_len] != '\0')
		line_len++;
	*line = ft_strsub(*s_mem, 0, line_len);
	if ((*s_mem)[line_len] == '\0')
		ft_strdel(s_mem);
	else
	{
		s_rest = ft_strdup(&((*s_mem)[line_len + 1]));
		free(*s_mem);
		*s_mem = s_rest;
		if (*s_mem == NULL)
			return (-1);
		if ((*s_mem)[0] == '\0')
			ft_strdel(s_mem);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char *s_mem[FD_SIZE];
	int			nbread;

	if (fd < 0 || line == NULL)
		return (-1);
	nbread = readfd(&s_mem[fd], fd);
	if (nbread < 0)
		return (-1);
	if (nbread == 0 && s_mem[fd] == NULL)
		return (0);
	return (saveline(&s_mem[fd], line));
}
