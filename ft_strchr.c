/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:18:19 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 01:04:19 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, Worlds!";
    char *ptr = ft_strchr(str, 'o');

    if (ptr) {
        printf("Character found at position: %ld\n", ptr - str);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}
*/
