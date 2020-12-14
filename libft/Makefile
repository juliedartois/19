# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jd-artoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 10:19:31 by jd-artoi          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2020/12/02 11:23:54 by jd-artoi         ###   ########.fr        #
=======
#    Updated: 2020/12/04 12:15:34 by jd-artoi         ###   ########.fr        #
>>>>>>> 7b3fd82596a22586018655d231f07c6519c70e27
#                                                                              #
# **************************************************************************** #

FLAG		=	-Wall -Wextra -Werror

NAME		=	libft.a

SRC			=	ft_memset.c			\
				ft_bzero.c			\
				ft_memcpy.c			\
				ft_memccpy.c		\
				ft_memmove.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_strlen.c			\
				ft_isalpha.c		\
				ft_isdigit.c		\
				ft_tolower.c		\
				ft_toupper.c		\
				ft_isascii.c		\
				ft_isprint.c		\
				ft_isalnum.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strncmp.c		\
				ft_strlcpy.c		\
				ft_strlcat.c		\
				ft_strnstr.c		\
				ft_atoi.c			\
				ft_calloc.c			\
				ft_strdup.c			\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\

OBJ			=	$(SRC:.c=.o)

SRCBONUS	=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
<<<<<<< HEAD

OBJ			=	$(SRC:.c=.o)

SRCBONUS	=	ft_lstnew.c		\
=======
				ft_lstiter.c		\
				ft_lstmap.c			\
>>>>>>> 7b3fd82596a22586018655d231f07c6519c70e27

OBJBONUS	=	$(SRCBONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus: $(OBJ) $(OBJBONUS)
	@ar rc $(NAME) $(OBJ) $(OBJBONUS)
	@ranlib $(NAME)

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
