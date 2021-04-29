/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:43:36 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/11/26 18:53:16 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_src;
	size_t len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (len_src);
	else if (len_dst >= size)
		return (size + len_src);
	else
	{
		ft_strncat(dst, src, size - len_dst - 1);
		return (len_src + len_dst);
	}
}
