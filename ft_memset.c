
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
		temp[i++] = (unsigned char)c;
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	int	mem[12];
	int	i;

	ft_memset(mem, 5, 3 * sizeof(int));
	i = 0;
	while (i < 3)
		printf("%i\n", mem[i++]);
	return (0);
}
*/
