/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:13:41 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 00:28:55 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int v, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	s = (const unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)v)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char ch = '\0';

    char *result = (char *)ft_memchr(str, ch, strlen(str));

    if (result != NULL) {
        printf("Նիշ '%c' գտնվեց դիրքում: %ld\n", ch, result - str);
    } else {
        printf("Նիշ '%c' չգտնվեց։\n", ch);
    }

    return 0;
}
*/
