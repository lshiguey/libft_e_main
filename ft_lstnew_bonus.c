
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	node;
	
	node = *ft_lstnew("ft_lstnew example");
	printf("Content: %s\n", (char *)node.content);
	printf("Next: %p\n", node.next);
	return (0);
}
*/
