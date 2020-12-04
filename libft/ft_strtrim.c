/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:49:15 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/04 15:07:39 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(char a, const char *set)
{
	while (*set)
		if (a == *set++)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_check(s1[i], set))
		++i;
	while (j > i && ft_check(s1[j], set))
		--j;
	return (ft_substr(s1, i, (j - i + 1)));
}
