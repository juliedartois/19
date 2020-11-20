/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:14:09 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/20 15:03:54 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *a, size_t dstsize)
{
	char	*src;
	int		i;
	int		size;

	src = (char*)a;
	i = 0;
	size = 0;
	while (src[size])
		++size;
	if (dstsize == 0)
		return (size);
	i = -1;
	while (++i < (int)dstsize - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (size);
}
