/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:46:44 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 18:56:26 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int	main(void)
{
	int	mem[12];
	int	i;

	ft_bzero(mem, 3 * sizeof(int));
	i = 0;
	while (i < 3)
		printf("%i\n", mem[i++]);
	return (0);
}
*/
