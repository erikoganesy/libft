/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoganesy <eoganesy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:42:52 by eoganesy          #+#    #+#             */
/*   Updated: 2025/02/15 21:54:19 by eoganesy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len)
	{
		*p++ = (unsigned char)c;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "asdfg";
	unsigned long len = 5;
	int c = 78;

	ft_memset(s, c, len);
	printf("%c", s[1]);
}
*/
