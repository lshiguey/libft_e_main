/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:49:15 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 15:58:12 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t qtd_memb, size_t size)
{
	size_t	size_total;
	void	*temp;

	if (!qtd_memb || !size)
		return (malloc(0));
	size_total = qtd_memb * size;
	if (size_total / size != qtd_memb)
		return (NULL);
	temp = malloc(size_total);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size_total);
	return (temp);
}
