/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:35:51 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/11 19:04:42 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ponteiro1, const void *ponteiro2, size_t qtd_b)
{
	unsigned char	*temp_p1;
	unsigned char	*temp_p2;
	size_t			index;

	if (!qtd_b)
		return (0);
	temp_p1 = (unsigned char *)ponteiro1;
	temp_p2 = (unsigned char *)ponteiro2;
	index = 0;
	while (temp_p1[index] == temp_p2[index] && index < (qtd_b - 1))
		index++;
	return (temp_p1[index] - temp_p2[index]);
}
