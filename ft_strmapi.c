
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f || !str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
static char	strmapi_tester(unsigned int i, char c)
{
	return (i + c);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strmapi("teste", &strmapi_tester));
	return (0);
}
*/
