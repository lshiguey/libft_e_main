/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:27:02 by lshiguey          #+#    #+#             */
/*   Updated: 2025/07/30 20:30:34 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}
/*
int	main(void)
{
	printf("c retorna %c\n", ft_tolower('c')); // c
        printf("H retorna %c\n", ft_tolower('H')); // h
        printf("4 retorna %c\n", ft_tolower('4')); // 4
        printf("_ retorna %c\n", ft_tolower('_')); // _
        printf("59872 retorna %c\n", ft_tolower(59872)); // indefinido
        printf("-65 retorna %c\n", ft_tolower(-65)); // indefinido
        return (0);
}
*/