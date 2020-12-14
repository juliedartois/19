/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2020/12/02 11:23:02 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/02 14:05:11 by jd-artoi         ###   ########.fr       */
=======
/*   Created: 2020/12/03 10:01:00 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/09 15:51:49 by jd-artoi         ###   ########.fr       */
>>>>>>> 7b3fd82596a22586018655d231f07c6519c70e27
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
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
=======
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			a = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = a;
		}
	}
}
>>>>>>> 7b3fd82596a22586018655d231f07c6519c70e27
