/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:24:55 by trhee             #+#    #+#             */
/*   Updated: 2020/10/07 12:24:57 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t number, size_t size)
{
	void	*ret;

	if (!(ret = malloc(number * size)))
		return (0);
	ft_bzero(ret, number * size);
	return (ret);
}
