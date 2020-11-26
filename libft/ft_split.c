/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:33:53 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/26 11:23:41 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_count_words(char const *str, char c)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == c)
		{
			++count;
			while (str[i] == c && str[i + 1] == c)
				++i;
		}
	}
	if (str[i - 2] == c)
		return (count);
	return (count + 1);
}

void	ft_word_size(char **new, char const *str, char c)
{
	int		i;
	int		j;
	int		size;

	i = -1;
	j = -1;
	size = 0;
	while (str[++i])
	{
		if (str[i] != c)
			++size;
		else
		{
			new[++j] = malloc(sizeof(char) * size + 1);
			ft_strlcpy(new[j], &str[i - size], size + 1);
			size = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**new;

	if (!s)
		return (0);
	i = -1;
	count = ft_count_words(s, c);
	if (!(new = ft_calloc(count, sizeof(char*))))
		return (0);
	return (new);
}
