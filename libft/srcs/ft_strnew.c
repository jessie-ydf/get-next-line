/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:04:19 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/12/04 16:10:14 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr_new;

	ptr_new = (char *)malloc((size + 1) * sizeof(char));
	if (ptr_new == NULL)
		return (NULL);
	return ((char *)ft_memset(ptr_new, '\0', ((size + 1) * sizeof(char))));
}
