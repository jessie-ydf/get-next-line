/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:12:53 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/08/07 12:12:57 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_nbrlen(long int n)
{
	if (n < 0)
		return (1 + ft_nbrlen(-n));
	if (n / 10 < 1)
		return (1);
	return (1 + ft_nbrlen(n / 10));
}

char		*ft_itoa(int n)
{
	char	*str_res;
	int		len;
	long	n_long;

	n_long = (long int)n;
	len = ft_nbrlen(n_long);
	if (!(str_res = (char *)malloc(len + 1)))
		return (NULL);
	*(str_res + len) = '\0';
	if (n_long < 0)
	{
		n_long = -n_long;
		*str_res = '-';
	}
	while (n_long / 10 >= 1)
	{
		*(str_res + --len) = n_long % 10 + '0';
		n_long /= 10;
	}
	*(str_res + --len) = n_long + '0';
	return (str_res);
}
