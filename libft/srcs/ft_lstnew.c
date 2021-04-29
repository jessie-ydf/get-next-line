/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:39:05 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/08/31 18:39:24 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l_new;

	if (!(l_new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		l_new->content = NULL;
		l_new->content_size = 0;
	}
	else
	{
		if (!(l_new->content = (void *)malloc(content_size)))
		{
			free(l_new);
			return (NULL);
		}
		ft_memcpy(l_new->content, content, content_size);
		l_new->content_size = content_size;
	}
	l_new->next = NULL;
	return (l_new);
}
