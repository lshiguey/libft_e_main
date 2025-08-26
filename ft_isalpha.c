/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:58:07 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 20:10:33 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	printf("0 - false / 1 - true");
	printf("L retorna %i\n", ft_isalpha('L'));
	printf("& retorna %i\n", ft_isalpha('&'));
	printf("@ retorna %i\n", ft_isalpha('@'));
	printf("n retorna %i\n", ft_isalpha('n'));
	printf(") retorna %i\n", ft_isalpha(')'));
	printf("r retorna %i\n", ft_isalpha('r'));
	printf("0 retorna %i\n", ft_isalpha('0'));
	return (0);
}
