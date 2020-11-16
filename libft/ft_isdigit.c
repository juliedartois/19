/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <jd-artoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:44:21 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/16 17:49:37 by jd-artoi         ###   ########.fr       */
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
