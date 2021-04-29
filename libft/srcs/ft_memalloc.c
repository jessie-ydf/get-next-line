/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:17:28 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/12/04 12:28:11 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr_alloc;

	if (!(ptr_alloc = malloc(size)))
		return (NULL);
	ft_bzero(ptr_alloc, size);
	return (ptr_alloc);
}
