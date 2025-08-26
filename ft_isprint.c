/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:04:26 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 20:04:31 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

int	main(void)
{
	printf("0 - false / 1 - true");
	printf("L retorna %i\n", ft_isprint('L'));
	printf("& retorna %i\n", ft_isprint('&'));
	printf("@ retorna %i\n", ft_isprint('@'));
	printf("n retorna %i\n", ft_isprint('n'));
	printf(") retorna %i\n", ft_isprint(')'));
	printf("r retorna %i\n", ft_isprint('r'));
	printf("0 retorna %i\n", ft_isprint('0'));
	return (0);
}
