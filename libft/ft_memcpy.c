/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:08:20 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/18 16:25:17 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *b, const void *a, size_t n)
{
	char		*dest;
	const char	*src;

	dest = (char*)b;
	src = (const char*)a;
	if (a == NULL && b == NULL)
		return (NULL);
	while (n-- > 0)
		dest[n] = src[n];
	return (b);
}
