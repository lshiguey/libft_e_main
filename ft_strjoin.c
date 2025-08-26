
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	s1_len;
	size_t	temp_size;

	s1_len = ft_strlen(s1);
	temp_size = s1_len + ft_strlen(s2) + 1;
	temp = (char *)malloc(temp_size);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s1, s1_len + 1);
	ft_strlcat(temp, s2, temp_size);
	return (temp);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "strjoin ";
	char	*s2 = "example";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
