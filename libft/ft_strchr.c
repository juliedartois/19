/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:29:40 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/17 10:53:52 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (str && (*str != c))
		str++;
	if (*str == c)
		return (str);
	return (0);
}

int		main(void)
{
	char *str;

	str = "this is the string where you search";
	printf("ft : %d\nc  : %s\n", ft_strchr(str, 'e'), strchr(str, 'e'));
}
