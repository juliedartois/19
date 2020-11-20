/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:14:09 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/20 16:49:14 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *a, size_t dstsize)
{
	char	*src;
	int		i;
	int		size;

	src = (char*)a;
	i = -1;
	size = 0;
	if (a == NULL)
		return (0);
	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	while (++i < (int)dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (size);
}
