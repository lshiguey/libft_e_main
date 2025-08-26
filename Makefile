# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 18:49:00 by lshiguey          #+#    #+#              #
#    Updated: 2025/07/30 20:30:48 by lshiguey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a										#NAME → nome do arquivo final que será criado (libft.a).

CFLAGS := -Wall -Werror -Wextra						#CFLAGS → parâmetros passados ao compilador gcc: Wall → habilita todos os warnings comuns -Werror → transforma warnings em erros -Wextra → habilita avisos extras

ARFLAGS := -rcs										#ARFLAGS → usados pelo ar (criação de biblioteca estática). r → replace (substitui ou adiciona arquivos no arquivo .a). c → create (cria a biblioteca se ainda não existir). s → index (gera um índice interno, acelerando buscas de funções).

HEADERS := libft.h									#HEADERS → arquivo .h que será incluído na compilação.

SOURCES := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c  # \ QUEBRA DE LINHA SEM IMPEDIR A SEQUENCIA DO COMANDO. ARQUIVOS PARA SEREM TRATADOS. 

SOURCES_BONUS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJECTS := $(SOURCES:.c=.o) 						#TRANSFORMA TUDO QUE É .C PARA .O 

BONUS_OBJECTS := $(SOURCES_BONUS:.c=.o)

all: $(NAME)									#Compilar todos os .c principais e gerar libft.a.

$(NAME): $(OBJECTS)									#$@ → nome do alvo (libft.a). $^ → todos os objetos .o. $(AR) → comando de arquivador (ar), que junta todos os .o dentro de libft.a
	$(AR) $(ARFLAGS) $@ $^

bonus: $(BONUS_OBJECTS)								#Compila objetos bônus e adiciona dentro da biblioteca.
	$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c $(HEADERS)									#%.o → alvo (target) genérico: qualquer arquivo .o pode ser construído a partir de um .c correspondente. %.c → pré-requisito (prerequisite): para gerar arquivo.o, ele precisa de arquivo.c. $(HEADERS) → indica que também depende do(s) arquivo(s) .h (se o header mudar, recompila). @ → oculta o comando no terminal (não exibe a linha, só o resultado).$(CC) → variável que representa o compilador (normalmente gcc).$(CFLAGS) → flags de compilação (-Wall -Werror -Wextra no seu Makefile).-c → compila apenas, sem linkar (gera .o).$< → primeiro pré-requisito (o .c correspondente).-o $@ → define o nome do arquivo de saída como o target (.o).
	$(CC) $(CFLAGS) -c $< -o $@

clean:												#clean → remove arquivos .o.
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean										#flean → remove .o e libft.a.
	$(RM) $(NAME)

re: fclean all 								#re → recompila tudo do zero.

norm:												#Roda a norminette - como @ inibe o resultado da execucao 
	norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re bonus norm				#Garante que make all ou make clean executem as regras, mesmo que existam arquivos com esses nomes.
#make -n → simulação (mostra comandos sem rodar) make -p → dump das regras e variáveis make -q → checa se algo precisa ser recompilado.