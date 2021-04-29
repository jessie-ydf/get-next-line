/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:08:33 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/12/02 18:42:58 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *ptr_dest;

	if (dest == src)
		return (dest);
	ptr_dest = (char *)dest;
	while (n--)
		*ptr_dest++ = *(char *)src++;
	return (dest);
}
