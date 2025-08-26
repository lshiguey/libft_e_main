/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:03:54 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 20:04:19 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	printf("0 - false / 1 - true");
	printf("L retorna %i\n", ft_isdigit('L'));
	printf("& retorna %i\n", ft_isdigit('&'));
	printf("@ retorna %i\n", ft_isdigit('@'));
	printf("n retorna %i\n", ft_isdigit('n'));
	printf(") retorna %i\n", ft_isdigit(')'));
	printf("r retorna %i\n", ft_isdigit('r'));
	printf("0 retorna %i\n", ft_isdigit('0'));
	return (0);
}
