/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:36:36 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 22:36:38 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*node;

	lst = ft_lstnew("ft_lstsize example 1");
	node = ft_lstnew("ft_lstsize example 2");
	ft_lstadd_front(&lst, node);
	printf("List len: %i\n", ft_lstsize(lst));
	return (0);
}
*/
