/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 00:15:43 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 21:46:45 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	count;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	if (s[i] && s[i] != c)
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			count++;
			i--;
		}
		i++;
	}
	if (s[i - 1] == c)
		count--;
	return (count);
}

static int	lword(char const *s, char c, int windex)
{
	int	i;
	int	j;
	int	cn;
	int	l;

	if (!s[0])
		return (0);
	i = 0;
	j = 1;
	cn = count(s, c);
	if (windex > cn)
		return (0);
	while (j <= windex)
	{
		while (s[i] && s[i] == c)
			i++;
		l = i - 1;
		while (s[i] && s[i] != c)
			i++;
		if (windex == j)
			return (i - l - 1);
		j++;
		i++;
	}
	return (0);
}

static int	index(char const *s, char c, int ind)
{
	while (s[ind] && s[ind] == c)
		ind++;
	return (ind);
}

static void	free_memory(char **arr, int i)
{
	while (--i >= 0)
		free(arr[i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		l;
	int		i;
	int		ind;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	ind = 0;
	while (i < count(s, c))
	{
		arr[i] = (char *)malloc(sizeof(char) * (lword(s, c, i + 1) + 1));
		if (!arr[i])
			return (free_memory(arr, i), NULL);
		ind = index(s, c, ind);
		l = 0;
		while (l < lword(s, c, i + 1))
			arr[i][l++] = s[ind++];
		arr[i++][l] = '\0';
	}
	return (arr[i] = NULL, arr);
}

// #include <stdio.h>
// int main (int argc, char *argv[])
// {
// 	int i;
// 	(void)argc;
// 	char **g = ft_split(argv[1],argv[2][0]);   

// 	i = 0; 
// 	while (g[i])
// 	{
// 		printf("%s\n", g[i]);
// 		i++;
// 	}
// }
// // 	// printf("%d\n", count(argv[1],argv[2][0]));
// // 	// printf("%d\n", lword(argv[1],argv[2][0], 4));