/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:18:02 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/17 10:18:05 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

int		main(void)
{
	int c;

	c = 1;
	printf("ft : %d\n", ft_isdigit(c));
	printf("c  : %d\n", isdigit(c));
}
