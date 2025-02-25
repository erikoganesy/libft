/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 00:05:52 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 00:50:17 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!s)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char original[] = "Hello, World!";

    char *copy = ft_strdup(original);  // Կրկնօրինակում է original-ը

    if (copy == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);  // Անհրաժեշտ է ազատել հիշողությունը

    return 0;
}
*/
