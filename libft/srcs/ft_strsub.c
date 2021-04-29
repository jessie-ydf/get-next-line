/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:10:58 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/09/27 16:10:34 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str_sub;
	char	*str_temp;

	if (!s || start > ft_strlen(s))
		return (NULL);
	str_sub = (char *)malloc((len + 1) * sizeof(char));
	if (str_sub == NULL)
		return (NULL);
	str_temp = str_sub;
	s = &s[start];
	while (len-- && s)
		*str_temp++ = *s++;
	*str_temp = '\0';
	return (str_sub);
}
