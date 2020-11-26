/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:33:53 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/26 16:58:39 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_count_words(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (!(*s == c && *s + 1 == c))
			++count;
		*s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new = NULL;
	int		wd_count;

	wd_count = ft_count_words(s, c);
	return (new);
}

int		main(void)
{
	printf("%d\n", ft_count_words("words to split", ' '));
}
