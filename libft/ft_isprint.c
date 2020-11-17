/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <jd-artoi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:35:25 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/16 22:06:24 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	return (0);
}

int		main(void)
{
	printf("ft : %d\nc  : %d\n", ft_isprint('j'), isprint('j'));
}
