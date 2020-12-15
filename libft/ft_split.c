/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:33:53 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/07 11:16:55 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_free_all(char **new, int i)
{
	++i;
	while (--i >= 0)
		free(new[i]);
	free(new);
	return (0);
}

static int		ft_get_words(char *s, char **new, int wd_count, char c)
{
	int		start;
	int		len;
	int		i;
	int		wd;

	start = 0;
	len = 1;
	i = -1;
	wd = -1;
	while (s[++i] && ++wd < wd_count - 1)
	{
		while (s[i] == c)
			++i;
		start = i;
		while (s[++i] != c && s[i])
			++len;
		new[wd] = ft_substr(s, start, len);
		if (new[wd] == 0)
			return (ft_free_all(new, wd));
		len = 1;
	}
	new[wd_count - 1] = 0;
	return (1);
}

static int		ft_count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (s[0] == 0)
		return (1);
	while (s[++i])
		if (s[i] == c && (s[i - 1] != c || i == 0))
			++count;
	if (s[i - 1] != c)
		++count;
	return (count + 1);
}

char			**ft_split(char const *s, char c)
{
	char	**new;
	int		wd_count;

	if (!s)
		return (NULL);
	wd_count = ft_count_words(s, c);
	if (!(new = malloc(sizeof(char *) * wd_count)))
		return (NULL);
	if (!(ft_get_words((char*)s, new, wd_count, c)))
		return (NULL);
	return (new);
}
