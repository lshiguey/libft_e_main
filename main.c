/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:09:30 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/06 21:14:17 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("ft_isalpha: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isalpha('L'));
	printf("€ retorna %d\n", ft_isalpha(0xA4));
	printf("@ retorna %i\n", ft_isalpha('@'));
	printf("n retorna %i\n", ft_isalpha('n'));
	printf(") retorna %i\n", ft_isalpha(')'));
	printf("r retorna %i\n", ft_isalpha('r'));
	printf("0 retorna %i\n", ft_isalpha('0'));
	printf("Tab retorna %i\n", ft_isalpha('	'));
	printf("ft_isdigit: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isdigit('L'));
	printf("€ retorna %d\n", ft_isdigit(0xA4));
	printf("@ retorna %i\n", ft_isdigit('@'));
	printf("n retorna %i\n", ft_isdigit('n'));
	printf(") retorna %i\n", ft_isdigit(')'));
	printf("r retorna %i\n", ft_isdigit('r'));
	printf("0 retorna %i\n", ft_isdigit('0'));
	printf("Tab retorna %i\n", ft_isdigit('	'));
	printf("ft_isalnum: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isalnum('L'));
	printf("€ retorna %d\n", ft_isalnum(0xA4));
	printf("@ retorna %i\n", ft_isalnum('@'));
	printf("n retorna %i\n", ft_isalnum('n'));
	printf(") retorna %i\n", ft_isalnum(')'));
	printf("r retorna %i\n", ft_isalnum('r'));
	printf("0 retorna %i\n", ft_isalnum('0'));
	printf("Tab retorna %i\n", ft_isalnum('	'));
	printf("ft_isascii: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isascii('L'));
	printf("€ retorna %d\n", ft_isascii(0xA4));
	printf("@ retorna %i\n", ft_isascii('@'));
	printf("n retorna %i\n", ft_isascii('n'));
	printf(") retorna %i\n", ft_isascii(')'));
	printf("r retorna %i\n", ft_isascii('r'));
	printf("0 retorna %i\n", ft_isascii('0'));
	printf("Tab retorna %i\n", ft_isascii('	'));
	printf("ft_isprint: 0-false/1-true\n");
	printf("L retorna %i\n", ft_isprint('L'));
	printf("€ retorna %d\n", ft_isprint(0xA4));
	printf("@ retorna %i\n", ft_isprint('@'));
	printf("n retorna %i\n", ft_isprint('n'));
	printf(") retorna %i\n", ft_isprint(')'));
	printf("r retorna %i\n", ft_isprint('r'));
	printf("0 retorna %i\n", ft_isprint('0'));
	printf("Tab retorna %i\n", ft_isprint('	'));
	printf("ft_strlen\n");
	printf("Leandro deve retornar 7, retorna %zu\n", ft_strlen("Leandro"));
	printf("L€@n)r0 deve retornar 7, retorna %zu\n", ft_strlen("Leandro"));
	return (0);
}
