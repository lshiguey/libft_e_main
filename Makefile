# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 18:55:15 by lshiguey          #+#    #+#              #
#    Updated: 2025/08/06 21:15:14 by lshiguey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

AR = ar
RCS = rcs

CC = cc

CHMOD = chmod +x

NORM = norminette -R CheckForbiddenSourceHeader

C_SOURCE = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
C_BONUS = 	ft_isalpha.c

OBJ = $(C_SOURCE:.c=.o)
OBJ_BONUS = $(C_BONUS:.c=.o)

MAIN = main

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(RCS) $(NAME) $(OBJ)

%.o : %.c
	$(NORM) $<
	$(CC) $(CFLAGS) -c $< -o $@
	$(CHMOD) $@

bonus:
	$(MAKE) OBJ="$(OBJ) $(OBJ_BONUS)"

main: main.c
	$(CC) $(CFLAGS) main.c libft.a -o main
	$(CHMOD) $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS) $(MAIN)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re norm main
