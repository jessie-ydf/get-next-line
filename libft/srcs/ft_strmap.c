/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:54:05 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/08/06 17:54:16 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str_fresh;
	char	*str_temp;

	if (!s || !f)
		return (NULL);
	if (!(str_fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	str_temp = str_fresh;
	while (*s)
		*str_temp++ = f(*s++);
	*str_temp = '\0';
	return (str_fresh);
}
