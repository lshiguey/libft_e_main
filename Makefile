# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/21 16:21:37 by lotsubo           #+#    #+#              #
#    Updated: 2025/08/21 16:26:42 by lotsubo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
AR = ar
RCS = rcs
CC = cc
C_SOURCE = 	ft_atoi.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_itoa.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memset.c		\
			ft_memmove.c	\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strchr.c		\
			ft_striteri.c	\
			ft_strjoin.c	\
			ft_strlen.c		\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strdup.c		\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c	

C_BONUS = 	ft_lstnew_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstiter_bonus.c		\
			ft_lstmap_bonus.c

OBJ = $(C_SOURCE:.c=.o)

OBJ_BONUS = $(C_BONUS:.c=.o)

MAIN = main

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(RCS) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus : 
	$(MAKE) OBJ="$(OBJ) $(OBJ_BONUS)"


clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

main: main.c
	$(CC) $(CFLAGS) main.c libft.a -o main
	$(CHMOD) $@

.PHONY: all bonus clean fclean re
