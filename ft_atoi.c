/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:28:21 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/03 21:00:43 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * res));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "8";
    char str2[] = "+0";
    char str3[] = "-2147483648";

    int num1 = atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);

    printf("str1: %d\n", num1);
	printf("str2: %d\n", num2); 
    printf("str3: %d\n", num3); 

    return 0;
}
*/