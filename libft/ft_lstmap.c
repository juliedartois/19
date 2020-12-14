/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:43:18 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/08 13:46:52 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free_all(t_list *lst)
{
	ft_lstiter(lst, free);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tab;
	t_list	*lst_init;

	if (!lst || !f)
		return (NULL);
	lst_init = lst;
	tab = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		lst = lst->next;
		if (!(new = ft_lstnew(f(lst->content))))
		{
			if (del)
				ft_lstclear(&tab, del);
			else
				ft_free_all(lst_init);
			return (0);
		}
		ft_lstadd_back(&tab, new);
	}
	return (tab);
}
