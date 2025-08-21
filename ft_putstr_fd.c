/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:37:09 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 22:37:11 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putstr_fd("ft_pustr_fd example", fd);
	close(fd);
	return (0);
}
*/
