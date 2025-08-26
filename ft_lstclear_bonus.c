
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
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
	char	s1[] = "node 1";
	char	s2[] = "node 2";

	lst = ft_lstnew(s1);
	node = ft_lstnew(s2);
	ft_lstadd_back(&lst, node);
	printf("Before clear: %s, %s\n", (char *)lst->content, (char *)node->content);
	ft_lstclear(&lst, del_tester);
	printf("After clear: %s, %s\n", (char *)lst->content, (char *)node->content);
}
*/
