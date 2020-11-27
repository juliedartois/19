/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:34:20 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/27 09:58:24 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_get_int_size(unsigned int n)
{
	int		i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		++i;
	}
	return (i + 1);
}

char			*ft_itoa(int num)
{
	char			*res;
	unsigned int	n;
	int				sign;
	int				size;

	sign = 0;
	if (num < 0)
	{
		n = -num;
		++sign;
	}
	else
		n = num;
	size = ft_get_int_size(n);
	if (!(res = malloc(sizeof(char) * (size + sign))))
		return (0);
	res[--size + sign] = '\0';
	while (--size >= 0)
	{
		res[size + sign] = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
