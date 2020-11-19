/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:58:00 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/19 11:48:07 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *b, const void *a, int c, size_t n)
{
	char			*dest;
	unsigned char	*src;
	int				i;

	i = -1;
	dest = (char*)b;
	src = (unsigned char*)a;
	while (++i < (int)n)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (&dest[++i]);
	}
	return (NULL);
}