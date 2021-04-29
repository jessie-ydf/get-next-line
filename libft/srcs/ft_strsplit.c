/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfiquemo <dfiquemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:12:25 by dfiquemo          #+#    #+#             */
/*   Updated: 2020/08/07 12:12:29 by dfiquemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*ft_word(char const *s, char c)
{
	int		len;
	char	*word;
	char	*ptr;
	char	*temp;

	len = 0;
	ptr = (char *)s;
	while ((*ptr) && (*ptr != c))
	{
		ptr++;
		len++;
	}
	if (!(word = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ptr = (char *)s;
	temp = word;
	while (len--)
		*temp++ = *ptr++;
	*temp = '\0';
	return (word);
}

static int		ft_sub_num(char const *s, char c)
{
	int		num;
	int		i;

	num = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			num++;
		i++;
	}
	return (num);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**s_sub;
	char	**temp;
	int		num;
	int		len;

	if (!s)
		return (NULL);
	num = ft_sub_num(s, c);
	if (!(s_sub = (char **)malloc((num + 1) * sizeof(char *))))
		return (NULL);
	temp = s_sub;
	while (*s)
	{
		while (*s == c)
			s++;
		while ((*s != c) && (*s))
		{
			*temp++ = ft_word(s, c);
			len = ft_strlen(*(temp - 1));
			while (len--)
				s++;
		}
	}
	*temp = NULL;
	return (s_sub);
}
