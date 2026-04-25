/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:15:36 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/25 14:24:40 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* #include <stdio.h>
#include <stdlib.h>

char	test_func(unsigned int i, char c)
{
	(void)i;
	(void)c;
	return ('X');
}

int	main(void)
{
	char	*str = "12345";
	char	*res;

	res = ft_strmapi(str, test_func);
	if (res)
	{
		printf("Original: %s\n", str);
		printf("Resultado: %s\n", res);
		free(res);
	}
	return (0);
} */
