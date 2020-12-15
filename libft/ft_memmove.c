/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:49:03 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/27 09:58:00 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *b, const void *a, size_t n)
{
	unsigned char	*src;
	char			*dest;
	int				i;

	i = -1;
	src = (unsigned char*)a;
	dest = (char*)b;
	if (a == 0 && b == 0)
		return (NULL);
	else if (dest > (char*)src)
	{
		while (n > 0)
		{
			--n;
			dest[n] = src[n];
		}
	}
	else if (dest < (char*)src)
	{
		while ((size_t)++i < n)
			dest[i] = src[i];
	}
	return (dest);
}
