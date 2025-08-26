
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
static void	del_tester(void *content)
{
	ft_bzero(content, ft_strlen((char *)content));
}

#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*node;
	char	s1[] = "first node";
	char	s2[] = "second node";

	lst = ft_lstnew(s1);
	node = ft_lstnew(s2);
	ft_lstadd_back(&lst, node);
	printf("Before delete: %s\n", (char *)node->content);
	ft_lstdelone(node, del_tester);
	printf("After delete: %p\n", node->next);
}
*/
