/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:43:18 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/03 12:54:39 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tab;

	if (!lst || !f)
		return (NULL);
	tab = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		lst = lst->next;
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&tab, del);
			return (0);
		}
		ft_lstadd_back(&tab, new);
	}
	return (tab);
}
