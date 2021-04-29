/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:47:12 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/12/03 11:47:19 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			dest++;
			return (dest);
		}
		dest++;
		src++;
	}
	return (NULL);
}
