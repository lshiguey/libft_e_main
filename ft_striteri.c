
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
static void	striteri_tester(unsigned int i, char *str)
{
	*str = *str + i;
}

int	main(void)
{
	char	str[] = "striteri example";

	ft_striteri(str, &striteri_tester);
	printf("%s\n", str);
	return (0);
}
*/
