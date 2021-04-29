/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 19:03:50 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/09/03 19:03:53 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*n_list;
	t_list	*n_elem;
	t_list	*result;

	if (!lst || !f)
		return (NULL);
	n_elem = f(lst);
	if (!(n_list = ft_lstnew(n_elem->content, n_elem->content_size)))
		return (NULL);
	result = n_list;
	lst = lst->next;
	while (lst)
	{
		n_elem = f(lst);
		if (!(n_list->next = ft_lstnew(n_elem->content, n_elem->content_size)))
			return (NULL);
		lst = lst->next;
		n_list = n_list->next;
	}
	return (result);
}
