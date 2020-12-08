/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:14:09 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/08 13:34:09 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		size;

	i = -1;
	size = 0;
	if (!src)
		return (0);
	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	while (++i < (int)dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (size);
}
