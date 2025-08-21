/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:35:43 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 22:35:48 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int	main(void)
{
	t_list  *lst;
	t_list	*new;

	new = ft_lstnew("ft_lstadd_front example");
	lst = ft_lstnew("ft_lstnew example");
	printf("Content before: %s\n", (char *)lst->content);
	printf("Next before: %p\n", lst->next);
	ft_lstadd_front(&lst, new);
	printf("Content after: %s\n", (char *)lst->content);
	printf("Next after: %p\n", lst->next);
	return (0);
}
*/
