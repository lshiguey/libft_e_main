/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:41:34 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 17:56:38 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destino, const char *origem, size_t tam_dest)
{
	size_t	dest_len;
	size_t	orig_len;
	size_t	index;

	dest_len = ft_strlen(destino);
	orig_len = ft_strlen(origem);
	if (tam_dest <= dest_len)
		return (tam_dest + orig_len);
	index = 0;
	while (origem[index] && index < (tam_dest - dest_len - 1))
	{
		destino[dest_len + index] = origem[index];
		index++;
	}
	destino[dest_len + index] = '\0';
	return (dest_len + orig_len);
}
