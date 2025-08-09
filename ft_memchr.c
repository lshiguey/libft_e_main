/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:15:32 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 19:19:00 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ponteiro, int valor, size_t tamanho)
{
	size_t			index;
	unsigned char	*temp;

	index = 0;
	temp = (unsigned char *)ponteiro;
	while (index < tamanho)
	{
		if (temp[index] == (unsigned char)valor)
			return (temp + index);
		index++;
	}
	return (NULL);
}
