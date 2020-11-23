/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:59:23 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/23 15:42:35 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)hay);
	while (hay[++i] && i < (int)len)
	{
		while (needle[j])
		{
			if (hay[i] == needle[j])
				++j;
			else
				break ;
		}
		if (j == ft_strlen(needle))
			return ((char*)&hay[i]);
	}
	return (NULL);
}
