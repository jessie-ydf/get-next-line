/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:09:53 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/08/07 12:09:59 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2 && (ft_strlen(s1) == ft_strlen(s2)))
	{
		while (*s1 && *s2)
		{
			if (*s1++ != *s2++)
				return (0);
		}
		return (1);
	}
	return (0);
}
