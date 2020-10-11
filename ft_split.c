/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:13:11 by trhee             #+#    #+#             */
/*   Updated: 2020/10/10 17:58:49 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_count(char const *s, char c)
{
	size_t				cnt;
	size_t				i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

char					**ft_split(char const *s, char c)
{
	char				**ret;
	size_t				index;
	size_t				len;

	if (!s || !(ret = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (0);
	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			if (!(ret[index] = (char *)malloc(len + 1)))
				return (0);
			ft_strlcpy(ret[index++], s, len + 1);
			s += len;
		}
		else
			s++;
	}
	ret[index] = 0;
	return (ret);
}
