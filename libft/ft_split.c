/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:33:53 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/27 10:17:54 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static int		ft_count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[++i])
		if (s[i] == c && s[i - 1] != c)
			++count;
	if (s[i - 1] != c)
		++count;
	return (count + 1);
}

char			**ft_split(char const *s, char c)
{
	char	**new = NULL;
	int		wd_count;

	wd_count = ft_count_words(s, c);
	if (!(new = malloc(sizeof(char *) * wd_count)))
		return (0);
	return (new);
}
