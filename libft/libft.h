/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:19:15 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/17 16:29:09 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
// int		ft_isalnum(int c);
// int		ft_isascii(int c);
// int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
// int		ft_strchr(const char *s, int c);

#endif
