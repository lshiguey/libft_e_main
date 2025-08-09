/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:33:18 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 18:56:10 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *valor, int busca)
{
	while (*valor && *valor != (unsigned char)busca)
		valor++;
	if (*valor == (unsigned char)busca)
		return ((char *)valor);
	return (NULL);
}
