# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 10:19:31 by jd-artoi          #+#    #+#              #
#    Updated: 2020/11/18 11:45:09 by jd-artoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG	=	-Wall -Wextra -Werror

NAME	=	libft.a

SRC		=	ft_strlen.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_isascii		\
			ft_isprint		\
			ft_isalnum		\

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $<
	@echo "$@ created"
	@ranlib $@
	@echo "$@ indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re
