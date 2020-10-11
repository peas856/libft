/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:36:48 by trhee             #+#    #+#             */
/*   Updated: 2020/10/10 17:30:38 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*p_src;

	if (!dst && !src)
		return (0);
	p_src = (char *)src;
	s = (char *)dst;
	i = 0;
	while (i < n)
	{
		s[i] = p_src[i];
		i++;
	}
	return (dst);
}
