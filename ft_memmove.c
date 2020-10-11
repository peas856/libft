/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:38:51 by trhee             #+#    #+#             */
/*   Updated: 2020/10/10 17:31:52 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*tmp;
	const char		*s;

	if (!dst && !src)
		return (dst);
	if (dst <= src)
	{
		tmp = dst;
		s = src;
		while (n--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = dst;
		tmp += n;
		s = src;
		s += n;
		while (n--)
			*--tmp = *--s;
	}
	return (dst);
}
