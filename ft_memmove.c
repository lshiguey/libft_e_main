/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:16:41 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 16:26:06 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destino, const void *origem, size_t qtd_b)
{
	unsigned char	*temp_destino;
	unsigned char	*temp_origem;

	temp_destino = (unsigned char *)destino;
	temp_origem = (unsigned char *)origem;
	if (temp_origem < temp_destino && temp_origem + (qtd_b - 1) >= temp_destino)
	{
		while (qtd_b--)
			temp_destino[qtd_b] = temp_origem[qtd_b];
	}
	else
		ft_memcpy(destino, origem, qtd_b);
	return (destino);
}
