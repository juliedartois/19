/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:58:23 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/23 15:05:12 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		i;

	i = -1;
	str = malloc(count * size);
	if (!str)
		return (0);
	while (str[++i])
		str[i] = '\0';
	return (&str[0]);
}
