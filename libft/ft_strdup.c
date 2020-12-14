/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:05:28 by jd-artoi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/02 13:35:39 by jd-artoi         ###   ########.fr       */
=======
/*   Updated: 2020/12/07 11:17:30 by jd-artoi         ###   ########.fr       */
>>>>>>> 7b3fd82596a22586018655d231f07c6519c70e27
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *s1)
{
	int		i;
	char	*cpy;


	i = -1;
	cpy = malloc(sizeof(const char) * (ft_strlen(s1) + 1));
	if (!cpy)
		return (NULL);
	while (s1[++i])
		cpy[i] = s1[i];
	cpy[i] = '\0';
	return (cpy);
}
