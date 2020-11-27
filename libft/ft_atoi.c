/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:35:02 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/27 10:00:49 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int							min;

	i = 0;
	res = 0;
	min = 1;
	i = ft_is_whitespace(i, (char*)str);
	if (str[i] == '-')
		min = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += (str[i] - 48);
		if (res >= LLONG_MAX && min == 1)
			return (-1);
		else if (res >= LLONG_MAX && min == -1)
			return (0);
		++i;
	}
	res *= min;
	return (res);
}
