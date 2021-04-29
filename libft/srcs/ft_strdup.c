/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:04:10 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/11/22 19:04:49 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;

	s_dup = (char*)malloc(sizeof(*s_dup) * (ft_strlen(s) + 1));
	if (s_dup == NULL)
		return (NULL);
	return (ft_strcpy(s_dup, s));
}
