/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:53:49 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/20 16:55:50 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *a, size_t dstsize)
{
	char	*src;
	size_t	i;
	size_t	j;
	size_t	size;

	j = 0;
	i = 0;
	size = 0;
	src = (char*)a;
	size = ft_strlen((char*)a) + ft_strlen(dst);
	while (dst[i])
		++i;
	if (dstsize == 0)
		return (size);
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (size - 1);
}
