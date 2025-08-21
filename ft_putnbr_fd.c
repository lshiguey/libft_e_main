/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:37:04 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 22:37:05 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_number(long long n, int fd)
{
	char	c;

	if (n > 9)
		write_number(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		long_n = -long_n;
		ft_putchar_fd('-', fd);
	}
	write_number(long_n, fd);
}

/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putnbr_fd(-2147483648, fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(2147483647, fd);
	close(fd);
	return (0);
}
*/
