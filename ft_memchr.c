
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return (temp + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	int	dest[] = {0, -8, 65, 4, 7};
	int	*found;

	found = (int *)ft_memchr(dest, 'A', sizeof(int) * 5);
	printf("Valor encontrado na memória: %i\n", *found);
	return (0);
}
*/
