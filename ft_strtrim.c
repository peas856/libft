/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:47:31 by trhee             #+#    #+#             */
/*   Updated: 2020/10/10 17:41:08 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ret;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start != end)
	{
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end--;
	}
	if (!(ret = malloc(end - start + 1)))
		return (0);
	ft_strlcpy(ret, (char *)(s1 + start), end - start + 1);
	ret[end - start] = '\0';
	return (ret);
}
