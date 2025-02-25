/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:31:35 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/14 22:06:24 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t d_size)
{
	size_t	dlen;
	size_t	j;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = 0;
	if (dlen >= d_size)
		return (slen + d_size);
	while (src[j] && dlen + 1 + j < d_size)
	{
		dst[dlen + j] = src[j];
		j++;
	}
	if (j < d_size)
		dst[dlen + j] = '\0';
	return (slen + dlen);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	printf("a  %zu\n", ft_strlcat("pqrs", "abcdefigh", 10));
// 	printf("b  %lu\n", strlcat("pqrs", "abcdefigh", 10));
// }
