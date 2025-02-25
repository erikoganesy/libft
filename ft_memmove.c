/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:21:55 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 21:32:52 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (const void *)src;
	if (d > s && d < s + len)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    // Example: Overlapping memory regions
    char buffer[] = "Hello, Overlapping World!";

    printf("Before memmove: %s\n", buffer);

    // Move "Overlapping" to the start of the buffer (overlapping regions)
    ft_memmove(buffer+7, buffer, 11); // Copy 11 characters ("Overlapping")

    printf("After memmove: %s\n", buffer);

    return 0;
}
*/