/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:59:23 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/24 14:30:10 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	int		i;
	int		j;
	size_t	ne_len;

	hay = (char*)haystack;
	i = -1;
	j = 0;
	ne_len = ft_strlen(needle);
	if (ne_len == 0)
		return (hay);
	while (hay[++i] && ne_len <= len)
	{
		if (hay[i] == needle[0] && ft_memcmp(&hay[i], needle, ne_len) == 0)
			return (&hay[i]);
		--len;
	}
	return (NULL);
}
