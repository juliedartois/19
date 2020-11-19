/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:19:15 by jd-artoi          #+#    #+#             */
/*   Updated: 2020/11/19 21:26:12 by jd-artoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *b, const void *a, size_t n);
void	*ft_memccpy(void *b, const void *a, int c, size_t n);
void	*ft_memmove(void *b, const void *a, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
