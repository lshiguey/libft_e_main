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

#include "libft.h"

int	main(void)
{
	size_t	tamanho;
	int		ponteiro[4];
	int		index;
	int		origem[10] = {1, 2, 3};
	int		destino[10] = {9, 8, 7};
	int		i;	
	const char	*ponteiro1;
	const char	*ponteiro2;	
	float	*arr;
	char 	*result;
	char	*s1 = "strjoin ";
	char	*s2 = "example";
	char	*s3 = "   trim---strtrim example---trim     ";
	char	*str3;
	char	**splitted_str;
	char	str[] = "strdup example";
	char 	str2[] = "";
	char	*superstr = "this is a super string";
	char	*substr;
	char	*nome;
	char	*resultado;
	char	origem1[]  = "leandro otsubo";
	char	destino1[] = "leandro otsubo";
	char	origem2[]  = "leandro shigueyoshi otsubo";
	char	destino2[] = "leandro otsubo";
	char	origem3[]  = "leandro otsubo";
	char	destino3[] = "leandro shigueyoshi otsubo";
	char	origem4[]  = "leandro otsubo";
	char	destino4[] = "leandro otsubo";
	char	origem5[]  = "leandro shigueyoshi otsubo";
	char	destino5[] = "leandro otsubo";
	char	origem6[]  = "leandro otsubo";
	char	destino6[] = "leandro shigueyoshi otsubo";	
	char	origem7[]  = "leandro otsubo";
	char	destino7[] = "leandro otsubo";
	char	origem8[]  = "leandro shigueyoshi otsubo";
	char	destino8[] = "leandro otsubo";
	char	origem9[]  = "leandro otsubo";
	char	destino9[] = "leandro shigueyoshi otsubo";
	char	origem10[]  = "leandro otsubo";
	char	destino10[] = "leandro otsubo";
	char	origem11[]  = "leandro shigueyoshi otsubo";
	char	destino11[] = "leandro otsubo";
	char	origem12[]  = "leandro otsubo";
	char	destino12[] = "leandro shigueyoshi otsubo";
	char	origem13[]  = "leandro otsubo";
	char	destino13[] = "leandro otsubo";
	char	origem14[]  = "leandro shigueyoshi otsubo";
	char	destino14[] = "leandro otsubo";
	char	origem15[]  = "leandro otsubo";
	char	destino15[] = "leandro shigueyoshi otsubo";
	char	origem16[]  = "leandro otsubo";
	char	destino16[] = "leandro otsubo";
	char	origem17[]  = "leandro shigueyoshi otsubo";
	char	destino17[] = "leandro otsubo";
	char	origem18[]  = "leandro otsubo";
	char	destino18[] = "leandro shigueyoshi otsubo";	
	printf("================================================> ft_isalpha\n");
	printf("L retorna %i\n", ft_isalpha('L'));
	printf("€ retorna %d\n", ft_isalpha(0xA4));
	printf("@ retorna %i\n", ft_isalpha('@'));
	printf("n retorna %i\n", ft_isalpha('n'));
	printf(") retorna %i\n", ft_isalpha(')'));
	printf("r retorna %i\n", ft_isalpha('r'));
	printf("0 retorna %i\n", ft_isalpha('0'));
	printf("Tab retorna %i\n", ft_isalpha('	'));
	printf("================================================> ft_isdigit\n");
	printf("ft_isdigit: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isdigit('L'));
	printf("€ retorna %d\n", ft_isdigit(0xA4));
	printf("@ retorna %i\n", ft_isdigit('@'));
	printf("n retorna %i\n", ft_isdigit('n'));
	printf(") retorna %i\n", ft_isdigit(')'));
	printf("r retorna %i\n", ft_isdigit('r'));
	printf("0 retorna %i\n", ft_isdigit('0'));
	printf("Tab retorna %i\n", ft_isdigit('	'));
	printf("================================================> ft_isalnum\n");
	printf("ft_isalnum: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isalnum('L'));
	printf("€ retorna %d\n", ft_isalnum(0xA4));
	printf("@ retorna %i\n", ft_isalnum('@'));
	printf("n retorna %i\n", ft_isalnum('n'));
	printf(") retorna %i\n", ft_isalnum(')'));
	printf("r retorna %i\n", ft_isalnum('r'));
	printf("0 retorna %i\n", ft_isalnum('0'));
	printf("Tab retorna %i\n", ft_isalnum('	'));
	printf("================================================> ft_isascii\n");
	printf("ft_isascii: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isascii('L'));
	printf("€ retorna %d\n", ft_isascii(0xA4));
	printf("@ retorna %i\n", ft_isascii('@'));
	printf("n retorna %i\n", ft_isascii('n'));
	printf(") retorna %i\n", ft_isascii(')'));
	printf("r retorna %i\n", ft_isascii('r'));
	printf("0 retorna %i\n", ft_isascii('0'));
	printf("Tab retorna %i\n", ft_isascii('	'));
	printf("================================================> ft_isprint\n");
	printf("ft_isprint: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isprint('L'));
	printf("€ retorna %d\n", ft_isprint(0xA4));
	printf("@ retorna %i\n", ft_isprint('@'));
	printf("n retorna %i\n", ft_isprint('n'));
	printf(") retorna %i\n", ft_isprint(')'));
	printf("r retorna %i\n", ft_isprint('r'));
	printf("0 retorna %i\n", ft_isprint('0'));
	printf("Tab retorna %i\n", ft_isprint('	'));
	printf("================================================> ft_strlen\n");
	printf("Leandro deve retornar 7, retorna %zu\n", ft_strlen("Leandro"));
	printf("L€@n)r0 deve retornar 7, retorna %zu\n", ft_strlen("Leandro"));
	printf("================================================> ft_memset\n");
	printf("sizeof(int)=%li\n", sizeof(int));
	printf("sizeof(men)=%li\n", sizeof(ponteiro));
	printf("sizeof(index)=%li\n", sizeof(index));
	printf("Trocando brancos por 1, retorna\n");
	ft_memset(ponteiro, 1, sizeof(ponteiro));
	index = 0;
	while (index < 1)
		printf("%i\n", ponteiro[index++]);
	printf("================================================> ft_bzero\n");
	printf("chama ft_memset para zerar a variavel\n");
	ft_bzero(ponteiro, sizeof(ponteiro));
	index = 0;
	while (index < 1)
		printf("%i\n", ponteiro[index++]);
	printf("================================================> ft_memcpy\n");
	printf("ANTES DE CHAMAR FT_MEMCPY\n");
	index = 0;
	while (index < 3)
	{
		printf("ORIGEM[%i] : %i\n", index, origem[index]);
		printf("DESTINO[%i]: %i\n", index, destino[index]);
		index++;
	}
	ft_memcpy(destino, origem, 3 * sizeof(int));
	printf("DEPOIS DE CHAMAR FT_MEMCPY\n");
	index = 0;
	while (index < 3)
	{
		printf("ORIGEM[%i] : %i\n", index, origem[index]);
		printf("DESTINO[%i]: %i\n", index, destino[index]);
		index++;
	}
	printf("================================================> ft_memmove\n");
	printf("SIZEOF ORIGEM  1 %lu\n", sizeof(origem1));
	printf("SIZEOF DESTINO 1 %lu\n", sizeof(destino1));
	printf("SIZEOF ORIGEM  2 %lu\n", sizeof(origem2));
	printf("SIZEOF DESTINO 2 %lu\n", sizeof(destino2));
	printf("SIZEOF ORIGEM  3 %lu\n", sizeof(origem3));
	printf("SIZEOF DESTINO 3 %lu\n", sizeof(destino3));
	printf("SIZEOF ORIGEM  4 %lu\n", sizeof(origem4));
	printf("SIZEOF DESTINO 4 %lu\n", sizeof(destino4));
	printf("SIZEOF ORIGEM  5 %lu\n", sizeof(origem5));
	printf("SIZEOF DESTINO 5 %lu\n", sizeof(destino5));
	printf("SIZEOF ORIGEM  6 %lu\n", sizeof(origem6));
	printf("SIZEOF DESTINO 6 %lu\n", sizeof(destino6));
	printf("\n");
	printf("1 - ANTES DE CHAMAR FT_MEMMOVE 1 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem1));
	printf("ORIGEM : %s\n", origem1);
	printf("DESTINO: %s\n", destino1);
	ft_memmove(destino1, origem1, sizeof(origem1));
	printf("\n");
	printf("2 - DEPOIS DE CHAMAR FT_MEMMOVE 1 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem1));
	printf("ORIGEM : %s\n", origem1);
	printf("DESTINO: %s\n", destino1);
	printf("\n");
	printf("3 - ANTES DE CHAMAR FT_MEMMOVE 2 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem2));
	printf("ORIGEM : %s\n", origem2);
	printf("DESTINO: %s\n", destino2);
	ft_memmove(destino2, origem2, sizeof(origem2));
	printf("\n");
	printf("4 - DEPOIS DE CHAMAR FT_MEMMOVE 2 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem2));
	printf("ORIGEM : %s\n", origem2);
	printf("DESTINO: %s\n", destino2);
	printf("\n");
	printf("5 - ANTES DE CHAMAR FT_MEMMOVE 3 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem3));
	printf("ORIGEM : %s\n", origem3);
	printf("DESTINO: %s\n", destino3);
	ft_memmove(destino3, origem3, sizeof(origem3));
	printf("\n");
	printf("6 - DEPOIS DE CHAMAR FT_MEMMOVE 3 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem3));
	printf("ORIGEM : %s\n", origem3);
	printf("DESTINO: %s\n", destino3);
	printf("\n");
	printf("7 - ANTES DE CHAMAR FT_MEMMOVE 4 COM SIZEOF DESTINO %lu\n",
		sizeof(destino4));
	printf("ORIGEM : %s\n", origem4);
	printf("DESTINO: %s\n", destino4);
	ft_memmove(destino4, origem4, sizeof(destino4));
	printf("\n");
	printf("8 - DEPOIS DE CHAMAR FT_MEMMOVE 4 COM SIZEOF DESTINO %lu\n",
		sizeof(destino4));
	printf("ORIGEM : %s\n", origem4);
	printf("DESTINO: %s\n", destino4);
	printf("\n");
	printf("9 - ANTES DE CHAMAR FT_MEMMOVE 5 COM SIZEOF DESTINO %lu\n",
		sizeof(destino5));
	printf("ORIGEM : %s\n", origem5);
	printf("DESTINO: %s\n", destino5);
	ft_memmove(destino5, origem5, sizeof(destino5));
	printf("\n");
	printf("10 - DEPOIS DE CHAMAR FT_MEMMOVE 5 COM SIZEOF DESTINO %lu\n",
		sizeof(destino5));
	printf("ORIGEM : %s\n", origem5);
	printf("DESTINO: %s\n", destino5);
	printf("\n");
	printf("11 - ANTES DE CHAMAR FT_MEMMOVE 6 COM SIZEOF DESTINO %lu\n",
		sizeof(destino6));
	printf("ORIGEM : %s\n", origem6);
	printf("DESTINO: %s\n", destino6);
	ft_memmove(destino6, origem6, sizeof(destino6));
	printf("\n");
	printf("12 - DEPOIS DE CHAMAR FT_MEMMOVE 6 COM SIZEOF DESTINO %lu\n",
		sizeof(destino6));
	printf("ORIGEM : %s\n", origem6);
	printf("DESTINO: %s\n", destino6);
	printf("================================================> ft_strlcpy\n");
	printf("\n");
	printf("1 - ANTES DE CHAMAR ft_strlcpy 7 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem7));
	printf("ORIGEM : %s\n", origem7);
	printf("DESTINO: %s\n", destino7);
	ft_strlcpy(destino7, origem7, sizeof(origem7));
	printf("\n");
	printf("2 - DEPOIS DE CHAMAR ft_strlcpy 7 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem7));
	printf("ORIGEM : %s\n", origem7);
	printf("DESTINO: %s\n", destino7);
	printf("\n");
	printf("3 - ANTES DE CHAMAR ft_strlcpy 8 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem8));
	printf("ORIGEM : %s\n", origem8);
	printf("DESTINO: %s\n", destino8);
	ft_strlcpy(destino8, origem8, sizeof(origem8));
	printf("\n");
	printf("4 - DEPOIS DE CHAMAR ft_strlcpy 8 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem8));
	printf("ORIGEM : %s\n", origem8);
	printf("DESTINO: %s\n", destino8);
	printf("\n");
	printf("5 - ANTES DE CHAMAR ft_strlcpy 9 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem9));
	printf("ORIGEM : %s\n", origem9);
	printf("DESTINO: %s\n", destino9);
	ft_strlcpy(destino9, origem9, sizeof(origem9));
	printf("\n");
	printf("6 - DEPOIS DE CHAMAR ft_strlcpy 9 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem9));
	printf("ORIGEM : %s\n", origem9);
	printf("DESTINO: %s\n", destino9);
	printf("\n");
	printf("7 - ANTES DE CHAMAR ft_strlcpy 10 COM SIZEOF DESTINO %lu\n",
		sizeof(destino10));
	printf("ORIGEM : %s\n", origem10);
	printf("DESTINO: %s\n", destino10);
	ft_strlcpy(destino10, origem10, sizeof(destino10));
	printf("\n");
	printf("8 - DEPOIS DE CHAMAR ft_strlcpy 10 COM SIZEOF DESTINO %lu\n",
		sizeof(destino10));
	printf("ORIGEM : %s\n", origem10);
	printf("DESTINO: %s\n", destino10);
	printf("\n");
	printf("9 - ANTES DE CHAMAR ft_strlcpy 11 COM SIZEOF DESTINO %lu\n",
		sizeof(destino11));
	printf("ORIGEM : %s\n", origem11);
	printf("DESTINO: %s\n", destino11);
	ft_strlcpy(destino11, origem11, sizeof(destino11));
	printf("\n");
	printf("10 - DEPOIS DE CHAMAR ft_strlcpy 11 COM SIZEOF DESTINO %lu\n",
		sizeof(destino11));
	printf("ORIGEM : %s\n", origem11);
	printf("DESTINO: %s\n", destino11);
	printf("\n");
	printf("11 - ANTES DE CHAMAR ft_strlcpy 12 COM SIZEOF DESTINO %lu\n",
		sizeof(destino12));
	printf("ORIGEM : %s\n", origem12);
	printf("DESTINO: %s\n", destino12);
	ft_strlcpy(destino12, origem12, sizeof(destino12));
	printf("\n");
	printf("12 - DEPOIS DE CHAMAR ft_strlcpy 12 COM SIZEOF DESTINO %lu\n",
		sizeof(destino12));
	printf("ORIGEM : %s\n", origem12);
	printf("DESTINO: %s\n", destino12);
	printf("================================================> ft_strlcat\n");
	printf("\n");
	printf("1 - ANTES DE CHAMAR ft_strlcat 13 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem13));
	printf("ORIGEM : %s\n", origem13);
	printf("DESTINO: %s\n", destino13);
	tamanho = ft_strlcat(destino13, origem13, sizeof(origem13));
	printf("\n");
	printf("2 - DEPOIS DE CHAMAR ft_strlcat 13 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem13));
	printf("ORIGEM : %s\n", origem13);
	printf("DESTINO: %s\n", destino13);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("3 - ANTES DE CHAMAR ft_strlcat 14 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem14));
	printf("ORIGEM : %s\n", origem14);
	printf("DESTINO: %s\n", destino14);
	tamanho = ft_strlcat(destino14, origem14, sizeof(origem14));
	printf("\n");
	printf("4 - DEPOIS DE CHAMAR ft_strlcat 14 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem14));
	printf("ORIGEM : %s\n", origem14);
	printf("DESTINO: %s\n", destino14);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("5 - ANTES DE CHAMAR ft_strlcat 15 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem15));
	printf("ORIGEM : %s\n", origem15);
	printf("DESTINO: %s\n", destino15);
	tamanho = ft_strlcat(destino15, origem15, sizeof(origem15));
	printf("\n");
	printf("6 - DEPOIS DE CHAMAR ft_strlcat 15 COM SIZEOF ORIGEM %lu\n",
		sizeof(origem15));
	printf("ORIGEM : %s\n", origem15);
	printf("DESTINO: %s\n", destino15);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("13 - ANTES DE CHAMAR ft_strlcat 16 COM SIZEOF DESTINO %lu\n",
		sizeof(destino16));
	printf("ORIGEM : %s\n", origem16);
	printf("DESTINO: %s\n", destino16);
	tamanho = ft_strlcat(destino16, origem16, sizeof(destino16));
	printf("\n");
	printf("14 - DEPOIS DE CHAMAR ft_strlcat 16 COM SIZEOF DESTINO %lu\n",
		sizeof(destino16));
	printf("ORIGEM : %s\n", origem16);
	printf("DESTINO: %s\n", destino16);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("15 - ANTES DE CHAMAR ft_strlcat 17 COM SIZEOF DESTINO %lu\n",
		sizeof(destino17));
	printf("ORIGEM : %s\n", origem17);
	printf("DESTINO: %s\n", destino17);
	tamanho = ft_strlcat(destino17, origem17, sizeof(destino17));
	printf("\n");
	printf("16 - DEPOIS DE CHAMAR ft_strlcat 17 COM SIZEOF DESTINO %lu\n",
		sizeof(destino17));
	printf("ORIGEM : %s\n", origem17);
	printf("DESTINO: %s\n", destino17);
	printf("retorno: %zu\n", tamanho);
	printf("\n");
	printf("17 - ANTES DE CHAMAR ft_strlcat 18 COM SIZEOF DESTINO %lu\n",
		sizeof(destino18));
	printf("ORIGEM : %s\n", origem18);
	printf("DESTINO: %s\n", destino18);
	tamanho = ft_strlcat(destino18, origem18, sizeof(destino18));
	printf("\n");
	printf("18 - DEPOIS DE CHAMAR ft_strlcat 18 COM SIZEOF DESTINO %lu\n",
		sizeof(destino18));
	printf("ORIGEM : %s\n", origem18);
	printf("DESTINO: %s\n", destino18);
	printf("retorno: %zu\n", tamanho);
	printf("================================================> ft_toupper\n");
	printf("l = %c\n", ft_toupper('l'));
	printf("e = %c\n", ft_toupper('e'));
	printf("a = %c\n", ft_toupper('a'));
	printf("n = %c\n", ft_toupper('n'));
	printf("d = %c\n", ft_toupper('d'));
	printf("r = %c\n", ft_toupper('r'));
	printf("o = %c\n", ft_toupper('o'));
	printf("================================================> ft_tolower\n");
	printf("L = %c\n", ft_tolower('L'));
	printf("E = %c\n", ft_tolower('E'));
	printf("A = %c\n", ft_tolower('A'));
	printf("N = %c\n", ft_tolower('N'));
	printf("D = %c\n", ft_tolower('D'));
	printf("R = %c\n", ft_tolower('R'));
	printf("O = %c\n", ft_tolower('O'));
	printf("================================================> ft_strchr\n");
	printf("ft_strchr(LEANDRO, L) %s\n", ft_strchr("LEANDRO", 'L'));
	printf("ft_strchr(LEANDRO, E) %s\n", ft_strchr("LEANDRO", 'E'));
	printf("ft_strchr(LEANDRO, A) %s\n", ft_strchr("LEANDRO", 'A'));
	printf("ft_strchr(LEANDRO, N) %s\n", ft_strchr("LEANDRO", 'N'));
	printf("ft_strchr(LEANDRO, D) %s\n", ft_strchr("LEANDRO", 'D'));
	printf("ft_strchr(LEANDRO, R) %s\n", ft_strchr("LEANDRO", 'R'));
	printf("ft_strchr(LEANDRO, O) %s\n", ft_strchr("LEANDRO", 'O'));
	printf("ft_strchr(LEANDRO, X) %s\n", ft_strchr("LEANDRO", 'X'));
	printf("ft_strchr(LEANDRO, barra0) %s\n", ft_strchr("LEANDRO", '\0'));
	printf("ft_strchr(barra0, barra0) %s\n", ft_strchr("\0", '\0'));
	printf("================================================> ft_strrchr\n");
	printf("ft_strrchr(LEANDRO, L) %p\n", ft_strrchr("LEANDRO", 'L'));
	printf("ft_strrchr(LEANDRO, E) %p\n", ft_strrchr("LEANDRO", 'E'));
	printf("ft_strrchr(LEANDRO, A) %p\n", ft_strrchr("LEANDRO", 'A'));
	printf("ft_strrchr(LEANDRO, N) %p\n", ft_strrchr("LEANDRO", 'N'));
	printf("ft_strrchr(LEANDRO, D) %p\n", ft_strrchr("LEANDRO", 'D'));
	printf("ft_strrchr(LEANDRO, R) %p\n", ft_strrchr("LEANDRO", 'R'));
	printf("ft_strrchr(LEANDRO, O) %p\n", ft_strrchr("LEANDRO", 'O'));
	printf("ft_strrchr(LEANDRO, X) %p\n", ft_strrchr("LEANDRO", 'X'));
	printf("ft_strrchr(LEANDRO, barra0) %p\n", ft_strrchr("LEANDRO", '\0'));
	printf("ft_strrchr(barra0, barra0) %p\n", ft_strrchr("\0", '\0'));
	printf("================================================> ft_strncmp\n");
	printf("ft_strncmp(LEANDRO, leandro) %d\n",
		ft_strncmp("LEANDRO", "leandro", 3));
	printf("ft_strncmp(leandro, LEANDRO) %d\n",
		ft_strncmp("leandro", "LEANDRO", 3));
	printf("ft_strncmp(LEANDRO, LEAndro) %d\n",
		ft_strncmp("LEANDRO", "LEAndro", 3));
	printf("================================================> ft_memchr\n");
	nome = "leandro";
	resultado = ft_memchr(nome, 'l', 7);
	printf("Endereço retornado: %p\n", (void *)resultado);
	if (resultado != NULL)
		printf("String a partir do achado: %s\n", resultado);
	if (resultado != NULL)
		printf("Caractere encontrado: %c\n", *resultado);
	resultado = ft_memchr(nome, 'o', 7);
	printf("Endereço retornado: %p\n", (void *)resultado);
	if (resultado != NULL)
		printf("String a partir do achado: %s\n", resultado);
	if (resultado != NULL)
		printf("Caractere encontrado: %c\n", *resultado);
	resultado = ft_memchr(nome, 'x', 7);
	printf("Endereço retornado: %p\n", (void *)resultado);
	if (resultado != NULL)
		printf("String a partir do achado: %s\n", resultado);
	if (resultado != NULL)
		printf("Caractere encontrado: %c\n", *resultado);
	printf("================================================> ft_memcmp\n");
	ponteiro1 = "leandro";
	ponteiro2 = "LEANDRO";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	ponteiro1 = "leandro";
	ponteiro2 = "leandro";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	ponteiro1 = "LEANDRO";
	ponteiro2 = "leandro";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	ponteiro1 = "LEANDRO";
	ponteiro2 = "LEANDRO";
	printf("ponteiro1:%p ponteiro2: %p return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("ponteiro1:%s ponteiro2: %s return: %i\n",
		ponteiro1, ponteiro2, ft_memcmp(ponteiro1, ponteiro2, 7));
	printf("================================================> ft_strnstr\n");
	printf("busca \"lea\" em 20 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "lea", 20));
	printf("busca \"ots\" em 11 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "lea", 11));
	printf("busca \"ndr\" em 3 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "ndr", 3));
	printf("busca \"xxx\" em 20 b em \"leandro otsubo!\" e devolve \"%s\"\n",
		ft_strnstr("leandro otsubo!", "xxx", 20));
	printf("================================================> ft_atoi\n");
	printf("\"+42\" return %i\n", ft_atoi("+42"));
	printf("\"-42\" return %i\n", ft_atoi("-42"));
	printf("\"  +42\" return %i\n", ft_atoi("  +42"));
	printf("\"  -42\" return %i\n", ft_atoi("  -42"));
	printf("\" +42\" return %i\n", ft_atoi(" +42"));
	printf("\" -42\" return %i\n", ft_atoi(" -42"));
	printf("\"42\" return %i\n", ft_atoi("42"));
	printf("\" 42\" return %i\n", ft_atoi(" 42"));
	printf("\"42 \" return %i\n", ft_atoi("42 "));
	printf("\"--42\" return %i\n", ft_atoi("--42"));
	printf("\"++42\" return %i\n", ft_atoi("++42"));
	printf("\"A42\" return %i\n", ft_atoi("A42"));
	printf("================================================> ft_calloc\n");
	i = 0;
	arr = (float *)ft_calloc(5, sizeof(float));
	printf("Memória alocada e preenchida por zeros:\n");
	while (i < 5)
		printf("%f\n", arr[i++]);
	printf("================================================> ft_strdup\n");
	printf("string address: %p\n", str);
	printf("duplicated string address: %p\n", ft_strdup(str));
	printf("duplicated string value: \"%s\"\n", ft_strdup(str));
	printf("string address: %p\n", str);
	printf("duplicated string address: %p\n", ft_strdup(str2));
	printf("duplicated string value: \"%s\"\n", ft_strdup(str2));
	printf("================================================> ft_substr\n");
	substr = ft_substr(superstr, 5, 10);
	printf("Superstring: %s\n", superstr);
	printf("Substring: %s\n", substr);
	printf("================================================> ft_strjoin\n");
	printf("%s\n", ft_strjoin(s1, s2));
	printf("================================================> ft_strtrim\n");
	printf("Before trim: %s\n", s3);
	printf("After trim: %s\n", ft_strtrim("", ""));
	printf("================================================> ft_split\n");
	str3 = "lorem ipsum dolor sit amet,\
		consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,\
		dignissim sit amet, adipiscing nec, ultricies sed,\
		dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a,\
		semper congue, euismod non, mi.";
	i = 0;
	splitted_str = ft_split(str3, ' ');
	if (!splitted_str)
		return (1);
	while (splitted_str[i])
		printf("%s\n", splitted_str[i++]);
	while (*splitted_str)
		free(*splitted_str++);
	printf("================================================> ft_itoa\n");
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(2147483647));
	printf("================================================> ft_strmapi\n");
	result = ft_strmapi("abcdef", ft_strmapi_teste);
	printf("%s\n", result);
	free(result);
	printf("================================================> ft_striteri\n");
	result = ft_striteri("abcdef", ft_striteri_teste);
	printf("%s\n", result);
	free(result);
	return (0);

}
