/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:35:02 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/09 11:02:13 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_is_whitespace(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	int							i;
	unsigned long long int		res;
	unsigned long long int		res1;
	int							min;

	res = 0;
	min = 1;
	i = ft_is_whitespace(0, (char*)str);
	if (str[i] == '-')
		min = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res1 = res;
		res1 += (str[i] - 48);
		if (res > res1 || res1 > LLONG_MAX)
			return (min == 1 ? -1 : 0);
		else
			res = res1;
		++i;
	}
	res *= min;
	return (res);
}
