/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:11:49 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/08/07 12:11:55 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	bl_l;
	size_t	index_r;
	size_t	len;

	if (!s)
		return (NULL);
	bl_l = 0;
	len = ft_strlen(s);
	index_r = len - 1;
	while ((s[bl_l]) && (s[bl_l] == ' ' || s[bl_l] == '\n' || s[bl_l] == '\t'))
		bl_l++;
	if (bl_l == len)
		return ("\0");
	while (s[index_r] == ' ' || s[index_r] == '\n' || s[index_r] == '\t')
		index_r--;
	len = index_r - bl_l + 1;
	if (len == 0)
		return ((char *)s);
	return (ft_strsub(s, bl_l, len));
}
