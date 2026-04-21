/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:14:49 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/21 14:54:56 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (const char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main(void)
{
    char s[] = "libftkajdkm abfkjawhdlawfmnalkd alkdnahd za";
    char *res;

    res = ft_memchr(s, 'z', 1000);

    printf("Resultado: %s\n", res);

    return (0);
} */
