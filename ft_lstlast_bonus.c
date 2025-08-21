/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:36:19 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 22:36:21 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*node;
	t_list	*new;

	lst = ft_lstnew("node 1");
	node = ft_lstnew("node 2");
	new = ft_lstnew("ft_lstadd_back example");
	ft_lstadd_back(&lst, node);
	ft_lstadd_back(&lst, new);
	printf("Last node Content: %s\n", (char *)ft_lstlast(lst)->content);
	printf("Last node Next: %p\n", ft_lstlast(lst)->next);
	return (0);
}
*/
