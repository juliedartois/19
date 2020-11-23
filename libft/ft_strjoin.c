/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:23:00 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/23 16:56:43 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(sizeof(const char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_strlcat(str, s2, ft_strlen(s2));
	printf("%s\n", str);
	return (str);
}

int		main(void)
{
ft_strjoin("first part,", " second part");
	return (0);
}
