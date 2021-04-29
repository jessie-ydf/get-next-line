/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:19:17 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/11/29 21:57:04 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int		aig_len;
	char	*strfound;

	strfound = (char *)meule_de_foin;
	aig_len = ft_strlen(aiguille);
	if (aig_len == 0)
		return (strfound);
	while (*strfound)
	{
		if (*strfound == *aiguille)
		{
			if (ft_strncmp(aiguille, strfound, aig_len) == 0)
				return (strfound);
		}
		strfound++;
	}
	return (NULL);
}
