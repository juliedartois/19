/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:58:00 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/18 16:41:38 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *b, const void *a, int c, size_t n)
{
	char		*dest;
	const char	*src;

	dest = (char*)b;
	src = (const char*)a;
	if (a == NULL && b == NULL)
		return (NULL);
	while (n-- > 0 || src[n] != (unsigned char)c)
		dest[n] = src[n];
	if (src[n] == c)
		return (&dest[++n]);
	return (b);
}
