/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:00:45 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/11/29 12:46:18 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	long int	sign;
	int			i;
	long int	amt;

	sign = 1;
	i = 0;
	amt = 0;
	while (nptr[i] == '\f' || nptr[i] == '\t' || nptr[i] == '\v' ||
		nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (amt * sign + ((long int)(nptr[i] - '0')) > 922337203685477587)
			return (-1);
		if (amt * sign - ((long int)(nptr[i] - '0')) < -922337203685477588)
			return (0);
		amt = amt * 10 + ((long int)(nptr[i] - '0'));
		i++;
	}
	return (amt * sign);
}
