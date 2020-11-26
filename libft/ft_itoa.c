/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:34:20 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/26 13:29:48 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_get_int_size(int n)
{
	int		i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		sign;

	res = "";
	size = 0;
	sign = 0;
	if (n < 0)
		n *= -(++sign);
	size = ft_get_int_size(n);
	if (!(res = malloc(sizeof(char) * (size + 1 + sign))))
		return (0);
	res[size--] = '\0';
	while (size >= 0)
	{
		if (sign == 1 && size == 0)
			
		res[size--] = n % 10;
		n /= 10;
	}

	return (res);
}
