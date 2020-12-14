/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:01:00 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/12/14 11:47:55 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
