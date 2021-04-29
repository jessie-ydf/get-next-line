/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:22:55 by dfiquemo          #+#    #+#             */
/*   Updated: 2019/11/21 16:02:38 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	repl;

	str = (unsigned char *)b;
	repl = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = repl;
		i++;
	}
	return (str);
}
