/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:47:55 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 20:37:34 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_first(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				break ;
			j++;
		}
		if (!set[j])
			break ;
		i++;
	}
	return (i);
}

static int	check_last(char const *s1, char const *set)
{
	int	j;
	int	l;

	l = ft_strlen(s1);
	while (l > 0)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[l - 1])
				break ;
			j++;
		}
		if (!set[j])
			break ;
		l--;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*arr;
	int		size;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = check_first(s1, set);
	size = check_last(s1, set);
	if (i >= size)
		return (ft_strdup(""));
	arr = (char *)malloc(size - i + 1);
	if (!arr)
		return (NULL);
	j = ft_strlcpy(arr, &s1[i], size - i + 1);
	return (arr);
}
