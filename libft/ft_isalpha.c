/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jd-artoi <jd-artoi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:28:37 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/16 19:54:55 by jd-artoi         ###   ########.fr       */
=======
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:18:45 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/17 12:07:31 by jd-artoi         ###   ########.fr       */
>>>>>>> b0ba7c2fad7b342bbb19af4b29593bc5fc1dc412
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c < 'A' || c > 'z') || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}
