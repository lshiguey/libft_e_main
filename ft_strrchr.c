
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strrchr("bonjour", 'b')); // bonjour
	printf("%s\n", ft_strrchr("ABCABC", 'B')); // BC
	printf("%s\n", ft_strrchr("ABCABC", 'b')); // (null)
	printf("%s\n", ft_strrchr("string example", 'e')); // e
	printf("%s\n", ft_strrchr("", '\0')); // \0
	printf("%s\n", ft_strrchr("test", '\0')); // \0
	printf("%s\n", ft_strrchr("\0", '\0')); // \0
	return (0);
}
*/
