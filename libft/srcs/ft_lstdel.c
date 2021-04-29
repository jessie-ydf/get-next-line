/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:00:22 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/09/01 17:00:33 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*temp;

	if (del && alst)
	{
		lst = *alst;
		while (lst)
		{
			temp = lst;
			del(lst->content, lst->content_size);
			free(lst);
			lst = temp->next;
		}
		*alst = NULL;
	}
}
