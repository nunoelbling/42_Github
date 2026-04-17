/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno1tap <nuno1tap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:24:05 by nuno1tap          #+#    #+#             */
/*   Updated: 2026/04/17 20:41:36 by nuno1tap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t	i;
    unsigned char  	*d;
    const unsigned char	*s;

	if (!dst && !src)
		return (0);
	
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dst[6];

	ft_memcpy(dst, src, 6);

	printf("src: %s\n", src);
	printf("dst: %s\n", dst);

	return (0);
} */
