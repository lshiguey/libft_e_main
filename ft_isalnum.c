/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:01:06 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 20:01:41 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main(void)
{
	printf("0 - false / 1 - true");
	printf("L retorna %i\n", ft_isalnum('L'));
	printf("& retorna %i\n", ft_isalnum('&'));
	printf("@ retorna %i\n", ft_isalnum('@'));
	printf("n retorna %i\n", ft_isalnum('n'));
	printf(") retorna %i\n", ft_isalnum(')'));
	printf("r retorna %i\n", ft_isalnum('r'));
	printf("0 retorna %i\n", ft_isalnum('0'));
	return (0);
}