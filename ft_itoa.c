/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:28:07 by trhee             #+#    #+#             */
/*   Updated: 2020/10/07 22:13:52 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_len(int n)
{
	size_t		ret;

	if (n == 0)
		return (1);
	ret = 0;
	while (n != 0)
	{
		ret++;
		n = n / 10;
	}
	return (ret);
}

char			*ft_itoa(int n)
{
	size_t		cnt;
	long int	m;
	char		*ret;

	m = (long int)n;
	cnt = ft_len(n);
	if (m < 0)
		cnt++;
	if (!(ret = (char *)malloc(cnt + 1)))
		return (0);
	if (m < 0)
	{
		ret[0] = '-';
		m = -m;
	}
	ret[cnt] = '\0';
	while (m != 0)
	{
		ret[--cnt] = m % 10 + '0';
		m = m / 10;
	}
	if (n == 0)
		ret[0] = 0 + '0';
	return (ret);
}
