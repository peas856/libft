/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:26:29 by trhee             #+#    #+#             */
/*   Updated: 2020/10/07 12:26:31 by trhee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isdigit(int c)
{
	int		ret;

	ret = 0;
	if (c >= '0' && c <= '9')
		ret = 1;
	return (ret);
}
