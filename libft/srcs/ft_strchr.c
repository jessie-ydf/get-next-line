/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:56:18 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/11/29 15:51:27 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char *strc;

	strc = (char *)s;
	while (*strc != c)
	{
		if (!*strc)
			return (NULL);
		strc++;
	}
	return (strc);
}
