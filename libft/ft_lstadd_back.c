/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:25:54 by jd-artoi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/11/30 18:39:51 by jd-artoi         ###   ########.fr       */
=======
/*   Updated: 2020/12/03 09:59:52 by jd-artoi         ###   ########.fr       */
>>>>>>> 7b3fd82596a22586018655d231f07c6519c70e27
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (lst && new)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}
