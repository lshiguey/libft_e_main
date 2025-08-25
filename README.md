# Libft

## Libft Common Core da 42

### ------------- Lista de Funções Básicas #<ctype.h> -----------------

- ​​[x] `ft_atoi` - Teste OK

`int ft_atoi(const char *nptr);`

Converte a parte inicial da string apontada por nptr para int.

Valor de retorno: Valor convertido ou 0 em caso de erro.

- [x] `ft_bzero` - Teste OK

`void ft_bzero(void *s, size_t n);`

Apaga os dados nos n bytes da memória, começando no local apontado por s, escrevendo zeros (bytes contendo '\0') nessa área.

Valor de retorno: Nenhum.

- [x] `ft_isalnum` - Teste OK

`int ft_isalnum(int c);`

Verifica se há um caractere alfabético; é equivalente a (isalpha(c) || ​​isdigit(c)).

- [x] `ft_isalpha` - Teste OK

`int ft_isalpha(int c);`

Verifica se há um caractere alfabético; no idioma padrão "C", é equivalente a (isupper || islower(c)).

- [x] `ft_isascii` - Teste OK

`int ft_isascii(int c);`

Verifica se c é um valor unsigned char de 7 bits que se enquadra no conjunto de caracteres ASCII.

- [x] `ft_isdigit` - Teste OK

`int ft_isdigit(int c);`

Verifica se há um dígito (0 a 9).

- [x] `ft_isprint` - Teste OK

`int ft_isprint(int c);`

Verifica se há algum caractere imprimível, exceto espaço.

- [x] `ft_memcpy` - Teste OK

`void *ft_memcpy(void *dest, const void *src, size_t n);`

A função copia n bytes da área de memória src para a área de memória dest. As áreas de memória não devem se sobrepor. Use memmove se as áreas de memória se sobrepuserem.

Valor de retorno: Ponteiro para dest.

- [x] `ft_memchr` - Teste OK

`void *ft_memchr(const void *s, int c, size_t n);`

A função varre os n bytes iniciais da área de memória apontada por s em busca da primeira instância de c. Tanto c quanto os bytes da área de memória apontada por s são interpretados como unsigned char.

Valor de retorno: Ponteiro para o tipo correspondente ao byte correspondente ou se o caractere NULL não ocorrer na área de memória fornecida.

- [x] `ft_memcmp` - Teste OK

`int ft_memcmp(const void *s1, const void *s2, size_t n);`

A função compara os primeiros n bytes (cada um interpretado como unsigned char) das áreas de memória s1 e s2.

Valor de retorno: A função retorna um inteiro menor que, igual a ou maior que zero se os primeiros n bytes de s1 forem, respectivamente, menores que, iguais ou maiores que os primeiros n bytes de s2. Para um valor de retorno diferente de zero, o sinal é determinado pelo sinal da diferença entre o primeiro par de bytes (interpretado como unsigned char) que diferem em s1 e s2. Se n for zero, o valor de retorno será zero.

- [x] `ft_memmove` - Teste OK

`void ft_memmove(void *dest, const void *src, size_t n);`

A função copia n bytes da área de memória src para a área de memória dest. As áreas de memória podem se sobrepor: a cópia ocorre como se os bytes em src fossem primeiro copiados para um array temporário que não se sobrepõe a src ou dest, e os bytes são então copiados do array temporário para dest.

Valor de retorno: A função retorna um ponteiro para dest.

- [x] `ft_memset` - Teste OK

`void ft_memset(void *s, int c, size_t n);`

A função preenche os primeiros n bytes da área de memória apontada por s com o byte constante c.

Valor de retorno: A função retorna um ponteiro para a área de memória s.

- [x] `ft_strlen` - Teste OK

`size_t ft_strlen(const char *s);`

A função calcula o comprimento da string apontada por s, excluindo o byte nulo final ('\0').

Valor de retorno: A função retorna o número de bytes na string apontada por s.

- [x] `ft_strlcpy` - Teste OK

`size_t ft_strlcpy(char *dst, const char *src, size_t size);`

A função copia strings de até tamanho - 1 caractere da string terminada em NUL src para dst. Garante que o resultado seja terminado em NUL (desde que tamanho seja maior que 0). Observe que um byte para o NUL deve ser incluído em tamanho. Opera apenas com strings "C" verdadeiras. Isso significa que src deve ser terminada em NUL.

Valor de retorno: O comprimento de src(size_t).

- [x] `ft_strlcat` - Teste OK

`size_t ft_strlcat(char *dst, const char *src, size_t size);`

A função anexa a string terminada em NUL src ao final de dst. Acrescentará no máximo size - strlen(dst) - 1 bytes. Garante a terminação em NUL do resultado (desde que size seja maior que 0 e desde que haja pelo menos um byte livre em dst). Observe que um byte para o NUL deve ser incluído em size. Opera apenas em strings "C" verdadeiras. Isso significa que src e dst devem ser terminadas em NUL.

Valores de retorno: Para concatenação bem-sucedida: size_t src + dst.

- [x] `ft_strchr` - Teste OK

`char *ft_strchr(const char *s, int c);`

A função retorna um ponteiro para a primeira ocorrência do caractere c na string s.
Valor de retorno: Ponteiro para o caractere correspondente ou NULL se o caractere não for encontrado. O byte nulo final é considerado parte da string, de modo que, se c for especificado como '\0', essas funções retornam um ponteiro para o terminador.

- [x] `ft_strncmp` - Teste OK

`int ft_strncmp(const char *s1, const char *s2, size_t n);`

A função compara os primeiros (no máximo) n bytes de s1 e s2. A localidade não é levada em consideração. A comparação é feita usando unsicaracteres gerados.

Valor de retorno: A função retorna um inteiro menor que, igual a ou maior que zero se s1 (ou os primeiros n bytes dele) for, respectivamente, menor que, igual a ou maior que s2.

- [x] `ft_strnstr` - Teste OK

`char *ft_strnstr(const char *big, const char *little, size_t len);`

A função localiza a primeira ocorrência da string terminada em nulo little na string big, onde não mais que len caracteres são pesquisados. Caracteres que aparecem após um caractere '\0' não são pesquisados.

Valor de retorno: Se little for uma string vazia, big é retornado; se little não ocorrer em nenhum lugar em big, NULL é retornado; caso contrário, um ponteiro para o primeiro caractere da primeira ocorrência de little é retornado.

- [x] `ft_strrchr` - Teste OK

`char *ft_strrchr(const char *s, int c);`

A função retorna um ponteiro para a última ocorrência do caractere c na string s.
Valores de Retorno: Ponteiro para o caractere encontrado ou NULL se o caractere não for encontrado. O byte nulo final é considerado parte da string, de modo que, se c for especificado como '\0', essas funções retornam um ponteiro para o terminador.

- [x] `ft_tolower` - Teste OK

`int ft_tolower(int c);`

Se c for uma letra maiúscula, retorna seu equivalente em minúsculas, se existir uma representação em minúsculas no local atual. Caso contrário, retorna c.

- [x] `ft_toupper` - Teste OK

`int ft_toupper(int c);`

Se c for uma letra minúscula, retorna seu equivalente em maiúsculas, se existir uma representação em maiúsculas no local atual. Caso contrário, retorna c.

##### com malloc()

- [x] `ft_calloc` - Teste OK

`void *ft_calloc(size_t nmemb, size_t size);`

- If (nmemb || size) = 0; return (\*unique) -> free()

- [x] `ft_strdup` - Teste OK

`char ft_strdub(const char *s);`

- strlcpy, strlcat, bzero -> #include <bsd/string.h> -> cc -lbsd

### --------------- Funções Extras ------------

- ​​[x] `ft_itoa` - Teste OK

`char *ft_itoa(int n);`

- [x] `ft_putchar_fd` - Teste OK

`void ft_putchar_fd(char c, int fd);`

- [x] `ft_putendl_fd` - Teste OK

`void ft_putendl_fd(char *s, int fd);`

- [x] `ft_putnbr_fd` - Teste OK

`void ft_putnbr_fd(int n, int fd);`

- [x] `ft_putstr_fd` - Teste OK

`void ft_putstr_fd(char *s, int fd);`

- [x] `ft_split` - Teste OK

`char **ft_split(char const *s, char c);`

- [x] `ft_striteri` - Teste OK

`void ft_striteri(char *s, void (*f)(unsigned int, char*));`

- [x] `ft_strjoin` - Teste OK

`char ft_strjoin(char const *s1, char const *s2);`

- [x] `ft_strmapi` - Teste OK

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`

- [x] `ft_strtrin` - Teste OK

`char *ft_strtrim(char const *s1, char const *set);`

- [x] `ft_substr` - Teste OK

`char *ft_substr(char const *s, insigned int start, size_t len);`

### ------------------ Bônus ---------------

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

- [x] `ft_lstnew` - Teste OK

`t_list *ft_lstnew(void *content);`

- [x] `ft_lstadd_front` - Teste OK

`void ft_lstadd_front(t_list **lst, t_list *new);`

- [x] `ft_lstsize` - Teste OK

`int ft_lstsize(t_list *lst);`

- [x] `ft_lstlast` - Teste OK

`t_list *ft_lstlast(t_list *lst);`

- [x] `ft_lstadd_back` - Teste OK

`void ft_lstadd_back(t_list **lst, t_list new);`

- [x] `ft_lstdelone` - Teste OK

`void ft_delone(t_list *lst, void (*del)(void *));`

- [x] `ft_lstclear` - Teste OK

`void ft_lstclear(t_list **lst, void (*f)(void *));`

- [x] `ft_lstiter` - Teste OK

`void ft_lstiter(t_list *lst, void (*f)(void *));`

- [x] `ft_lstmap` - Teste OK

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

### --------- Testes ----------

int main(void)
{
char *str1 = "+42lyon1";
char *str2 = "+1";
char *str2 = "-1";

printf("Função original: \t%d\t%d\t%d\n", atoi(str1),
atoi(str2), atoi(str3));
printf("Minha função: \t\t%d\t%d\t%d\n", ft_atoi(str1),
ft_atoi(str2), ft_atoi(str3));
return (0);
}

-------------------------

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main(void)
{
char str_orig1[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
char str_my1[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";

char str_my2[] = "Olá []$^&*()_+{}| Mundo!";
char str_orig2[] = "Olá []$^&*()_+{}| Mundo!";
int n = 5;

ft_bzero(&str_my1[n], n);
ft_bzero(&str_my2[n], n);
bzero(&str_orig1[n], n);
bzero(&str_orig2[n], n);

printf("\nFunção original:\n\tString 01: %.30s\n\t
String 02: %.30s", str_orig1, str_orig2);

printf("\n\nMinha função:\n\tString 01: %.30s\n\t
String 02: %.30s\n", str_my2, str_my1);

retornar (0)
}

--------------------------

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int str_size = 10;
char *teste1;
char *teste2;

teste1 = (char *)calloc(str_size, tamanhode(char));
teste2 = (char *)ft_calloc(str_size, tamanhode(char));

if (teste1 != NULL)
printf("Calloc Alocated!\n");
else
printf("Calloc falhou!\n");
if (teste2 != NULL)
printf("FT_Calloc alocado!\n");
else
printf("Calloc falhou!\n");

free(teste1);
free(teste2);
return (0);
}

-----------------------------

#include <ctype.h>
#include <stdio.h>
int main(void)
{
int teste = '0';
int teste2 = '9';
char teste3 = 'a';
char teste4 = '=';
char teste5 = '!';
char teste6 = '#';

printf("Teste 1 Valor [%d] :\n\tOriginal: %d", teste, isalnum(teste));
printf("\n\tft_isdigit: %d\n\n", ft_isalnum(teste));

printf("Teste 2 Valor [%d] :\n\tOriginal: %d", teste2, isalnum(teste2));
printf("\n\tft_isdigit: %d\n\n", ft_isalnum(teste2));

printf("Teste 3 Valor [%c] :\n\tOriginal: %d", teste3, isalnum(teste3));
printf("\n\tft_isdigit: %d\n\n", ft_isalnum(teste3));

printf("Teste 4 Valor [%c] :\n\tOriginal: %d", teste4, isalnum(teste4));
printf("\n\tft_isdigit: %d\n\n", ft_isalnum(teste4));

printf("Teste 5 Valor [%c] :\n\tOriginal: %d", teste5, isalnum(teste5));
printf("\n\tft_isdigit: %d\n\n", ft_isalnum(teste5));

printf("Teste 6 Valor [%c] :\n\tOriginal: %d", teste6, isalnum(teste6));
printf("\n\tft_isdigit: %d\n\n", ft_isalnum(teste6));

return (0);
}

-----------------------------

#include <ctype.h>
#include <stdio.h>
int main(void)
{
char teste = '1';
char teste2 = 'a';
char teste3 = 'A';
char teste4 = 'b';
char teste5 = '!';
char teste6 = '$';
char teste7 = '^';

printf("Teste 1:\n\tOriginal 1: %d\n", isalpha(teste));
printf("\tft_isalpha 1: %d\n\n", ft_isalpha(teste));

printf("Teste 2:\n\tOriginal a: %d\n", isalpha(teste2));
printf("\tft_isalpha a: %d\n\n", ft_isalpha(teste2));

printf("Teste 3:\n\tOriginal A: %d\n", isalpha(teste3));
printf("\tft_isalpha A: %d\n\n", ft_isalpha(teste3));

printf("Teste 4:\n\tOriginal b: %d\n", isalpha(teste4));
printf("\tft_isalpha b: %d\n\n", ft_isalpha(teste4)); 

printf("Teste 5:\n\tOriginal !: %d\n", isalpha(test5)); 
printf("\tft_isalpha !: %d\n\n", ft_isalpha(test5)); 

printf("Teste 6:\n\tOriginal $: %d\n", isalpha(test6)); 
printf("\tft_isalpha $: %d\n\n", ft_isalpha(test6)); 

printf("Teste 7:\n\tOriginal ^: %d\n", isalpha(test7)); 
printf("\tft_isalpha ^: %d\n\n", ft_isalpha(teste7)); 

retornar (0); 
}

--------------------------------- 

#include <ctype.h>
#include <stdio.h>
int main(void)
{
char teste = ;
char teste2 = 9;
char teste3 = 'a';
char teste4 = '=';
char teste5 = '!';
char teste6 = '#';

printf("Teste 1 Valor [%d] :\n\tOriginal: %d", teste, isascii(teste));
printf("\n\tft_isascii: %d\n\n", ft_isascii(teste));
printf("Teste 2 Valor [%d] :\n\tOriginal: %d", teste2, isascii(teste2));
printf("\n\tft_isascii: %d\n\n", ft_isascii(teste2));
printf("Teste 3 Valor [%c] :\n\tOriginal: %d", teste3, isascii(teste3)); 
printf("\n\tft_isascii: %d\n\n", ft_isascii(test3)); 
printf("Teste 4 Valor [%c] :\n\tOriginal: %d", test4, isascii(test4)); 
printf("\n\tft_isascii: %d\n\n", ft_isascii(test4)); 
printf("Teste 5 Valor [%c] :\n\tOriginal: %d", test5, isascii(test5)); 
printf("\n\tft_isascii: %d\n\n", ft_isascii(test5)); 
printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, isascii(test6));
printf("\n\tft_isascii: %d\n\n", ft_isascii(teste6));

retornar (0);
}

--------------------------------

#include <ctype.h>
#include <stdio.h>
int main(void)
{
int teste = 0;
int teste2 = 9;
char teste3 = '1';
int teste4 = '2';
int teste5 = '5';
char teste6 = '#';

printf("Teste 1 Valor [%d] :\n\tOriginal: %d", teste, isdigit(teste));
printf("\n\tft_isdigit: %d\n\n", ft_isdigit(teste));
printf("Teste 2 Valor [%d] :\n\tOriginal: %d", teste2, isdigit(teste2));
printf("\n\tft_isdigit: %d\n\n", ft_isdigit(teste2));
printf("Teste 3 Valor [%c] :\n\tOriginal: %d", teste3, isdigit(teste3));
printf("\n\tft_isdigit: %d\n\n", ft_isdigit(teste3));
printf("Teste 4 Valor [%d] :\n\tOriginal: %d", teste4, isdigit(teste4));
printf("\n\tft_isdigit: %d\n\n", ft_isdigit(teste4));
printf("Teste 5 Valor [%d] :\n\tOriginal: %d", teste5, isdigit(teste5));
printf("\n\tft_isdigit: %d\n\n", ft_isdigit(teste5));
printf("Teste 6 Valor [%c] :\n\tOriginal: %d", teste6, isdigit(teste6)); 
printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test6)); 

retornar (0); 
}

------------------------------------ 

#include <ctype.h> 
#include <stdio.h> 
int principal(vazio) 
{ 
teste interno = '0'; 
int teste2 = '9'; 
char teste3 = ' '; 
char teste4 = '\n'; 
char teste5 = '!'; 
char teste6 = '#'; 

printf("Teste 1 Valor [%d] :\n\tOriginal: %d", teste, isprint(teste)); 
printf("\n\tft_isprint: %d\n\n", ft_isprint(teste)); 
printf("Teste 2 Valor [%d] :\n\tOriginal: %d", teste2, isprint(teste2)); 
printf("\n\tft_isprint: %d\n\n", ft_isprint(teste2)); 
printf("Teste 3 Valor [%c]:\n\tOriginal: %d", teste3, isprint(teste3)); 
printf("\n\tft_isprint: %d\n\n", ft_isprint(teste3)); 
printf("Teste 4 Valor [%c] :\n\tOriginal: %d", test4, isprint(test4)); 
printf("\n\tft_isprint: %d\n\n", ft_isprint(teste4)); 
printf("Teste 5 Valor [%c] :\n\tOriginal: %d", test5, isprint(test5)); 
printf("\n\tft_isprint: %d\n\n", ft_isprint(teste5)); 
printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, isprint(test6)); 
printf("\n\tft_isprint: %d\n\n", ft_isprint(teste6));

retornar (0);
}

-----------------------------------

#include <stdio.h>
int main(void)
{
int entrada1 = 0;
int entrada2 = 987654321;
int entrada3 = -34567890;

printf("Retorno: %s\n", ft_itoa(entrada1));
printf("Retorno: %s\n", ft_itoa(entrada2));
printf("Retorno: %s\n", ft_itoa(entrada3));

retornar (0);
}

--------------------------------

#include <stdio.h>
#include <string.h>
int main(void)
{
int str_orig1[] = {1,2,3,4,5,6,7,8,9};
int str_orig2[] = {10,11,12,13,14,0,15,16};

int str_cp1_dest1[100];
int str_cp1_dest2[100];
int str_cp2_dest1[100];
int str_cp2_dest2[100];

int tamanho_comprimento1 = 9;
int tamanho_comprimento2 = 8;

memcpy(&str_cp1_dest1, &str_orig1, tamanho_de(int) * 3);
memcpy(&str_cp1_dest2, &str_orig2, tamanho_de(int) * 4);
ft_memcpy(&str_cp2_dest1, &str_orig1, tamanho_de(int) * 3);
ft_memcpy(&str_cp2_dest2, &str_orig2, sizeof(int) * 4);

printf("\nString original:\n\tString 01:\n");
para (int i = 0; i < tamanho_comprimento1; i++)
printf("str[%d] = %d\n", i, str_orig1[i]);
printf("\n\tString 02:\n");
para (int i = 0; i < tamanho_comprimento2; i++)
printf("str[%d] = %d\n", i, str_orig2[i]);
printf("\nFunção original:\n\tString 01:\n");
para (int i = 0; i < tamanho_comprimento1; i++)
printf("str[%d] = %d\n", i, str_cp1_dest1[i]);
printf("\n\tString 02:\n");
para (int i = 0; i < tamanho_comprimento2; i++)
printf("str[%d] = %d\n", i, str_cp1_dest2[i]);
printf("\nMinha_Função:\n\tString 01:\n");
para (int i = 0; i < tamanho_comprimento1; i++)
printf("str[%d] = %d\n", i, str_cp2_dest1[i]);
printf("\n\tString 02:\n");
para (int i = 0; i < tamanho_comprimento2; i++)
printf("str[%d] = %d\n", i, str_cp2_dest2[i]);
return (0);
}

-----------------------------------

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main(void)
{
char str_orig1[] = "ABC";
char str_orig2[] = "Olá []$^&*()_+{}| Mundo!";

char str_cp1_dest1[100];
char str_cp1_dest2[100];
char str_cp2_dest1[100];
char str_cp2_dest2[100];

memmove(str_cp1_dest1, str_orig1, tamanho(caractere) * 3);
memmove(&str_orig2[0], &str_orig2[6], tamanho(caractere) * 5);
ft_memmove(str_cp2_dest1, str_orig1, tamanho(caractere) * 3);
ft_memmove(&str_orig2[0], &str_orig2[6], tamanho(caractere) * 5);

printf("\nFunção original:\n\tString 01: %s\n\tString 02:
%s\n", str_cp1_dest1, str_cp1_dest2);
printf("\n\nMinha função:\n\tString 01: %s\n\tString 02:
%s\n\n", str_cp2_dest1, str_cp2_dest2);
return (0);
}

-----------------------------------

#include <stdio.h>
#include <string.h>
int main(void)
{
int n = 5;
char c = 'a';
char str1[] = "Teste da função ft_memset.";
char str2[] ​​= "Teste da função ft_memset.";
char str3[] = "Teste da função ft_memset.";

ft_memset(str2, c, n);
memset(str3, c, n);

printf("\nString original:\n\t%s", str1);
printf("\nRetorna função original: \n\t%s", str2);
printf("\nRetorna minha_função: \n\t%s\n", str3);

return (0);
}

------------------------------------

#include <stdio.h>
int main(void)
{
char *str = "-----Olá-Mundo!---alo";
char **strstr;
char z = '-';
size_t ctrl = 0;

strstr = ft_split(str, z);
while(strstr[ctrl] != NULL)
{
printf("string %ld: %s\n", ctrl, strstr[ctrl]);
ctrl++;
}
ctrl = 0;
return (0);
}

------------------------------------

#include <stdio.h>
#include <string.h>
int main(void)
{
char *str = "Olá Mundo!";
char c = 'l';

printf("\nFunção Original: \t%s", strchr(str, c + 256));
printf("\nMinha função: \t\t%s\n", ft_strchr(str, c + 256));

return (0);
}

------------------------------------

#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
char *str1 = "Olá Mundo!";
char *str2 = "";
char *str3 = "Coloque uma string longa aqui";

char *ptr_og1 = strdup(str1);
char *ptr_og2 = strdup(str2);
char *ptr_og3 = strdup(str3);
char *ptr_ft1 = ft_strdup(str1);
char *ptr_ft2 = ft_strdup(str2);
char *ptr_ft3 = ft_strdup(str3);

printf("Função original: str1 = %s\n", ptr_og1);
printf("Função original: endereço str1 = %p\n", (void *)&str1);
printf("Função original: endereço de cópia str1 = %p\n\n", (void *)&ptr_og1);
printf("Função original: str2 = %s\n", ptr_og2);
printf("Função original: str2 endereço = %p\n", (void *)&str2);
printf("Função original: str2 endereço de cópia = %p\n\n", (void *)&ptr_og2);
printf("Função original: str3 = %s\n", ptr_og3);
printf("Minha função: str1 = \t%s\n", ptr_ft1);
printf("Minha função: str1 endereço = \t%p\n\n", (void *)ptr_ft1);
printf("Minha função: str2 = \t%s\n", ptr_ft2);
printf("Minha função: str2 endereço = \t%p\n\n", (void *)&ptr_ft2);
printf("Minha função: str3 = \t%s\n", ptr_ft3);

free(ptr_og1);
livre(ptr_og2);
livre(ptr_og3);
livre(ptr_ft1);
livre(ptr_ft2);
livre(ptr_ft3);
return (0);
}

-----------------------------------

#include <stdio.h>
void função_teste(unsigned int i, char *c)
{
*c += i;
}

int main(void)
{
char *str1 = "0000000000";
char *str2 = "1111111111";

ft_striteri(str1, função_teste);
ft_striteri(str2, função_teste);

printf("STR 1 : %s", str1);
printf("STR 2 : %s", str2);
return (0);
}

-------------------------------------

#include <stdio.h>
int main(void)
{
char *str1 = "Oláááááááá";
char *str2 = "-Mundo!!!!!!!!!";
char *str3;

str3 = ft_strjoin(str1, str2);
printf("String Final: %s\n", str3);

return (0);
}

-------------------------------------

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
char *org = "Esta é a string original.";
char dest1[50] = "Olá Mundo!";
char dest2[50] = "Olá Mundo!";

int int_org = strlcat(dest1, org, 40);
int int_myft = ft_strlcat(dest2, org, 40);

printf("\nOriginal str: %s\n", org);
printf("\nStrlcat: %s\n\tRetorno: %d\n", dest1, int_org);
printf("\nft_strlcat: %s\n\tRetorno: %d\n", dest2, int_myft);

return (0);
}

---------------------------------------

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int ft_strlen(char *str);

int ft_strlen(char *str)
{
int i;
int len;

enquanto (str[i] != '\0')
{
len++;
i++;
}
return (len);
}

int main(void)
{
char str_orig1[] = "ABC";
char str_orig2[] = "Olá []$^&*()_+{}| Mundo!";

char str_cp1_dest1[100];
char str_cp1_dest2[100];
char str_cp2_dest1[100];
char str_cp2_dest2[100];

unsigned int orig_1 = strlcpy(str_cp1_dest1, str_orig1, 2);
unsigned int orig_2 = strlcpy(str_cp1_dest2, str_orig2, 10);
unsigned int minhafunção_1 = ft_strlcpy(str_cp2_dest1, str_orig1, 2);
unsigned int minhafunção_2 = ft_strlcpy(str_cp2_dest2, str_orig2, 10);

printf("\nFunção Original:\n\tString 01: %s\t\tRetorno: %d
\n\tString 02: %s\t\tRetorno: %d", str_cp1_dest1, orig_1, str_cp1_dest2, orig_2);
printf("\n\nMinha função:\n\tString 01: %s\t\tRetorno: %d\n\tString 02:
%s\t\tRetorno: %d\n", str_cp2_dest1, minhafunção_1, str_cp2_dest2, minhafunção_2);
return (0);
}

-------------------------------------------

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
if (argc > 0)
{
printf("Strlen = %d", ft_strlen(argv[1]));
}
return (0);
}

-------------------------------------------

#include <stdio.h>
char test_func(unsigned int i, char c)
{
if (i % 2 == 0 && c >= 'a' && c <= 'z')
return c - 32; // letras maiúsculas para índices pares
return c; // deixe os outros caracteres inalterados
}

int main(void)
{
char *str1 = "esta é uma string em minúsculas";
char *str2 = "ESTA É UMA STRING EM MAIÚSCULAS!";

printf("STR 1 : %s", ft_strmapi(str1, test_func));
printf("STR 2 : %s", ft_strmapi(str2, test_func));
return (0);
}

---------------------------------------------

#include <stdio.h>
#include <string.h>
int main(void)
{
char *str1 = "Olá Mundo!";
char *str2 = "Olá Mundo!";
int index = 50;

printf("Função Original: \t%d\n", strncmp(str1, str2, index));
printf("\n\tMinha Função: \t%d\n", ft_strncmp(str1, str2, index));

return (0);
}

---------------------------------------------

#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
char *org = "";
char *find = "";
int n = 7;

printf("Função Original: \t%s\n", strnstr(org, find, n));
printf("\tMinha Função: \t%s\n", ft_strnstr(org, find, n));

return (0);
}

---------------------------------------------

#include <stdio.h>
#include <string.h>
int main(void)
{
char *str = "Olá, Mundo!";
char c = 'l';

printf("\nFunção Original: \t%s", strrchr(str, c + 256));
printf("\nMinha Função: \t\t%s\n", ft_strrchr(str, c + 256));

return (0);
}

---------------------------------------------

#include <stdio.h>
int main(void)
{
char *str1 = "Esta é uma string de teste!";
char *str2 = "Olá, Mundo!";
caractere *ret1;
caractere *ret2;
caractere *ret3;
caractere *ret4;
caractere *ret5;
caractere *ret6;
caractere *ret7;

ret1 = ft_substr(str1, 10, 12);
ret2 = ft_substr(str2, 0, 12);
ret3 = ft_substr(str1, -1, 5);
ret4 = ft_substr(str2, 0, 0);
ret5 = ft_substr("", 0, 5);
ret6 = ft_substr(str1, 24, 1);
ret7 = ft_substr(str1, 0, -1);

printf("ft_substr: ");
printf("1 %s |", (ret1[0] == '\0') ? "KO" : ret1);
printf("2 %s |", (ret2[0] == '\0') ? "KO" : ret2);
printf("3 %s |", (ret3 == NULL) ? "OK" : ret3);

printf("4 %s |", (ret4 == NULL) ? "OK" : ret4);
printf("5 %s |", (ret5 == NULL) ? "OK" : ret5);
printf("6 %s |", (ret6 == NULL) ? "OK" : ret6);
printf("7 %s", (ret7 == NULL) ? "OK" : ret7);
printf("\n");

livre(ret1);
livre(ret2);
livre(ret3);
livre(ret4);
livre(ret5);
livre(ret6);
livre(ret7);
return (0);
}

----------------------------------------------

#include <ctype.h>
#include <stdio.h>
int main(void)
{
char teste1 = '0';
char teste2 = '9';
char teste3 = 'a';
char teste4 = 'A';
char teste5 = '!';
char teste6 = '#';

char *teste[6] = { &teste1, &teste2, &teste3, &teste4, &teste5, &teste6};

int var_origem1;
int var_origem2;
int var_origem3;
int var_origem4;
int var_origem5;
int var_origem6;

int *var_origem[6] = { &var_origem1, &var_origem2, &var_origem3,
&var_origem4, &var_origem5, &var_origem6};

int var_minha_função1;
int var_minha_função2;
int var_minha_função3;
int var_minha_função4;

int var_minha_função4;
int var_minha_função5;
int var_minha_função6;

int *var_minha_função[6] = { &var_minha_função1, &var_minha_função2,
&var_minha_função3, &var_minha_função4, &var_minha_função5, &var_minha_função6 };
for (int i = 0; i <= 5; i++)
{
*(var_origin[i]) = tolower(*(teste[i]));
*(var_minha_função[i]) = ft_tolower(*(teste[i]));
}

printf("Teste 1 Valor [%c] :\n\tOriginal: %c", teste1, var_origin1);
printf("\n\tft_minha_função: %c\n\n", var_minha_função1);
printf("Teste 2 Valor [%c] :\n\tOriginal: %c", teste2, var_origin2);
printf("\n\tft_minha_função: %c\n\n", var_minha_função2);
printf("Teste 3 Valor [%c] :\n\tOriginal: %c", teste3, var_origin3);
printf("\n\tft_minha_função: %c\n\n", var_minha_função3);
printf("Teste 4 Valor [%c] :\n\tOriginal: %c", teste4, var_origin4);
printf("\n\tft_minha_função: %c\n\n", var_minha_função4);
printf("Teste 5 Valor [%c] :\n\tOriginal: %c", teste5, var_origin5);
printf("\n\tft_minha_função: %c\n\n", var_minha_função5);
printf("Teste 6 Valor [%c] :\n\tOriginal: %c", teste6, var_origin6);
printf("\n\tft_minha_função: %c\n\n", var_minha_função6);

return (0);
}

------------------------------------------

#include <ctype.h>
#include <stdio.h>
int main(void)
{
char teste1 = '0';
char teste2 = '9';
char teste3 = 'a';
char teste4 = '=';
char teste5 = '!';
char teste6 = '#';

char *teste[6] = { &teste1, &teste2, &teste3, &teste4, &teste5, &teste6 };

int var_origem1;
int var_origem2;
int var_origem3;
int var_origem4;
int var_origem5;
int var_origem6;

int *var_origem[6] = { &var_origem1, &var_origem2, &var_origem3,
&var_origem4, &var_origem5, &var_origem6 };

int var_minha_função1;
int var_minha_função2;
int var_minha_função3;
int var_minha_função4;
int var_minha_função5;
int var_minha_função6;

int *var_minha_função[6] = { &var_minha_função1, &var_minha_função2,
&var_minha_função3, &var_minha_função4, &var_minha_função5, &var_minha_função6 };

for (int i = 0; i <= 5; i++)
{
*(var_origin[i]) = toupper(*(teste[i]));
*(var_minha_função[i]) = ft_toupper(*(teste[i]));
}

printf("Teste 1 Valor [%c] :\n\tOriginal: %c", teste1, var_origin1);
printf("\n\tft_minha_função: %c\n\n", var_minha_função1);

printf("Teste 2 Valor [%c] :\n\tOriginal: %c", teste2, var_origin2);
printf("\n\tft_minha_função: %c\n\n", var_minha_função2);
printf("Teste 3 Valor [%c] :\n\tOriginal: %c", teste3, var_origin3);
printf("\n\tft_minha_função: %c\n\n", var_minha_função3);
printf("Teste 4 Valor [%c] :\n\tOriginal: %c", teste4, var_origin4);
printf("\n\tft_minha_função: %c\n\n", var_minha_função4);
printf("Teste 5 Valor [%c] :\n\tOriginal: %c", teste5, var_origin5);
printf("\n\tft_minha_função: %c\n\n", var_minha_função5);
printf("Teste 6 Valor [%c] :\n\tOriginal: %c", teste6, var_origin6);
printf("\n\tft_minha_função: %c\n\n", var_minha_função6);

return (0);
}

----------------------------------
