/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:57:21 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/12/01 17:55:51 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *ndle, size_t len)
{
	char	*ptr_fd;
	size_t	len_ndle;

	ptr_fd = (char *)hays;
	len_ndle = ft_strlen(ndle);
	if (len_ndle == 0)
		return (ptr_fd);
	while (*ptr_fd != '\0' && len-- >= len_ndle)
	{
		if (*ptr_fd == *ndle && ft_strncmp(ndle, ptr_fd, len_ndle) == 0)
			return (ptr_fd);
		ptr_fd++;
	}
	return (NULL);
}
