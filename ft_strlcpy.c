/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:06:14 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 17:14:06 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destino, const char *origem, size_t tam_dest)
{
	size_t	index;

	if (tam_dest > 0)
	{
		index = 0;
		while (origem[index] && index < (tam_dest - 1))
		{
			destino[index] = origem[index];
			index++;
		}
		destino[index] = '\0';
	}
	return (ft_strlen(origem));
}
