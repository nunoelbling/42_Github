/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:34:44 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/30 13:42:07 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Teste 5: %d\n", ft_strncmp("", "", 1));
	printf("Teste 6: %d\n", ft_strncmp("a", "", 1));
	printf("Teste 7: %d\n", ft_strncmp("", "a", 1));
	printf("Teste 8: %d\n", ft_strncmp("abc", "abd=", 10));
	return (0);
} */
