/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:02:19 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 20:04:15 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main(void)
{
	printf("0 - false / 1 - true");
	printf("L retorna %i\n", ft_isascii('L'));
	printf("& retorna %i\n", ft_isascii('&'));
	printf("@ retorna %i\n", ft_isascii('@'));
	printf("n retorna %i\n", ft_isascii('n'));
	printf(") retorna %i\n", ft_isascii(')'));
	printf("r retorna %i\n", ft_isascii('r'));
	printf("0 retorna %i\n", ft_isascii('0'));
	return (0);
}