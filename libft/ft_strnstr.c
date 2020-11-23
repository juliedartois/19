/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:59:23 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/23 11:35:15 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needl, size_t len)
{
	int		i;
	int		j;
	char	*hay;
	char	*needle;

	i = -1;
	j = 0;
	hay = (char*)haystack;
	needle = (char*)needl;
	if (ft_strlen(needle) == 0)
		return (hay);
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
			return (&hay[i]);
	}
	return (NULL);
}
