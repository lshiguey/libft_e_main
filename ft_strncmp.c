/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:01:20 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 19:10:38 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *valor1, const char *valor2, size_t busca)
{
	size_t	index;

	if (!busca)
		return (0);
	index = 0;
	while (
		valor1[index] && valor1[index] == valor2[index] && index < (busca - 1))
		index++;
	return ((unsigned char)valor1[index] - (unsigned char)valor2[index]);
}
