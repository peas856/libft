/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:42:12 by trhee             #+#    #+#             */
/*   Updated: 2020/10/07 22:55:48 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	num;

	num = (long int)n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	c = num % 10 + '0';
	if (num / 10 > 0)
	{
		num = num / 10;
		ft_putnbr_fd(num, fd);
	}
	write(fd, &c, 1);
}
