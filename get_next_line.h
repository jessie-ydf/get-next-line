/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:53:32 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/10/20 14:05:00 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define FD_SIZE 255

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

int	get_next_line(const int fd, char **line);

#endif
