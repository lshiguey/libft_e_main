/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotsubo <lotsubo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:37:15 by lotsubo           #+#    #+#             */
/*   Updated: 2025/08/12 22:51:51 by lotsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*clean_mem(char **mem)
{
	char	**temp;

	temp = mem;
	while (*temp)
		free(*temp++);
	free(mem);
	return (NULL);
}

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**split_str(char **arr, char const *s, char c)
{
	char	*temp;
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			temp = ft_strchr(s, c);
			if (temp)
				len = temp - s;
			else
				len = ft_strlen(s);
			temp = ft_substr(s, 0, len);
			if (!temp)
				return (clean_mem(arr));
			arr[i++] = temp;
			s += len;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	return (split_str(arr, s, c));
}
