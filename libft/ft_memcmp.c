/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:24:47 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/19 21:40:03 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	char			*b;
	int				i;

	a = (unsigned char*)s1;
	b = (char*)s2;
	i = 0;
	while ((a[i] == b[i]) && i < (int)n)
		++i;
	if (a[i] != b[i])
		return (a[i] - b[i]);
	return (0);
}
