
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len_s;
	char			*substr;

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	if ((len_s - start) < len)
		len = len_s - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*superstr = "this is a super string";
	char	*substr;

	substr = ft_substr(superstr, 5, 10);
	printf("Superstring: %s\n", superstr);
	printf("Substring: %s\n", substr);
	return (0);
}
*/
