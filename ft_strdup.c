
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "strdup example";
	printf("string address: %p\n", str);
	printf("duplicated string address: %p\n", ft_strdup(str));
	printf("duplicated string value: \"%s\"\n", ft_strdup(str));
	printf("\n\n");
	char str2[] = "";
	printf("string address: %p\n", str);
	printf("duplicated string address: %p\n", ft_strdup(str2));
	printf("duplicated string value: \"%s\"\n", ft_strdup(str2));
}
*/
