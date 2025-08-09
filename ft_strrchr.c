/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:49:01 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 18:55:28 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *valor, int busca)
{
	int	index;

	index = ft_strlen(valor);
	while (index >= 0)
	{
		if (valor[index] == (unsigned char)busca)
			return ((char *)&valor[index]);
		index--;
	}
	return (NULL);
}
