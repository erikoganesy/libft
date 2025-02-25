/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:03:20 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/06 21:55:07 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenint(int n)
{
	int		l;
	long	c;

	l = 0;
	c = n;
	if (n < 0)
	{
		c = (-1) * c ;
		l++;
	}
	while (c / 10 > 0)
	{
		l++;
		c /= 10;
	}
	l++;
	return (l);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		len;
	int		i;
	long	c;

	len = lenint(n);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	i = len - 1;
	c = n;
	if (c < 0)
	{
		c = (-1) * c;
		arr[0] = '-';
	}
	while (c / 10 > 0)
	{
		arr[i--] = c % 10 + '0';
		c /= 10;
	}
	arr[i] = c % 10 + '0';
	arr[len] = '\0';
	return (arr);
}
/*
#include <stdio.h>

int main()
{
	char *s;

	s = ft_itoa(0);
	printf("%s", s);
}
*/
