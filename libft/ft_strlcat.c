/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:53:49 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/28 13:37:16 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = -1;
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (src[++i] && i < dstsize - dstlen - 1)
		dst[dstlen + i] = src[i];
	dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
