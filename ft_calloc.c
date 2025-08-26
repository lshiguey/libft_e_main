
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	m_size;
	void	*temp;

	if (!nmemb || !size)
		return (malloc(0));
	m_size = nmemb * size;
	if (m_size / size != nmemb)
		return (NULL);
	temp = malloc(m_size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, m_size);
	return (temp);
}

/*
#include <stdio.h>
int	main(void)
{
	float	*arr;
	int		i;

	i = 0;
	arr = (float *)ft_calloc(5, sizeof(float));
	printf("Memória alocada e preenchida por zeros:\n");
	while (i < 5)
		printf("%f\n", arr[i++]);
	return (0);
}
*/
