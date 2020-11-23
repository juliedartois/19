/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:53:49 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/23 14:11:58 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *a, size_t dstsize)
{
	char	*src;
	int		i;
	int		dstlen;

	i = -1;
	src = (char*)a;
	dstlen = ft_strlen(dst);
	if (dstlen > (int)dstsize)
		return (dstlen + ft_strlen(src));
	while (src[++i] && i < (int)(dstsize - dstlen - 1))
		dst[dstlen + i] = src[i];
	dst[i] = '\0';
	return (dstlen + ft_strlen(src));
}

int		main(void)
{
	char	*a;
	char	*b;
	size_t	i;

	a = " and the end";
	b = "this is the start";
	i = ft_strlcat(b, a, 30);
	printf("%zu\n%s\n", i, b);
}
