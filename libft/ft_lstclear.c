/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:23:02 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/02 14:05:11 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec(t_list *item, void (*del)(void*))
{
	if (item->next)
		ft_rec(item->next, del);
	if (!(item->next))
	{
		del(item);
		free(item);
	}
}

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*item;

	item = *lst;
	ft_rec(item, del);
	lst = NULL;
}
