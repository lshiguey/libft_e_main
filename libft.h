/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:06:35 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/21 15:26:44 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int valor);
int		ft_isdigit(int valor);
int		ft_isalnum(int valor);
int		ft_isascii(int valor);
int		ft_isprint(int valor);
size_t	ft_strlen(const char *valor);
void	*ft_memset(void *ponteiro, int valor, size_t qtd_b);
void	ft_bzero(void *ponteiro, size_t qtd_b);
void	*ft_memcpy(void *destino, const void *origem, size_t qtd_b);
void	*ft_memmove(void *destino, const void *origem, size_t qtd_b);
size_t	ft_strlcpy(char *destino, const char *origem, size_t tam_dest);
size_t	ft_strlcat(char *destino, const char *origem, size_t tam_dest);
int		ft_toupper(int valor);
int		ft_tolower(int valor);
char	*ft_strchr(const char *valor, int busca);
char	*ft_strrchr(const char *valor, int busca);
int		ft_strncmp(const char *ponteiro1, const char *ponteiro2, size_t qtd_b);
void	*ft_memchr(const void *ponteiro, int valor, size_t tamanho);
int		ft_memcmp(const void *ponteiro1, const void *ponteiro2, size_t qtd_b);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *valor);
void	*ft_calloc(size_t qtd_memb, size_t size);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif