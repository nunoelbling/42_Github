/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:36:04 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/18 14:36:36 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/*a funcao strchr encontra o primeiro caracter escolhido e imprime a partir 
do caracter ate ao fim da string*/

/* #include <stdio.h>

int	main(void)
{
	char str[] = "alo o meu nome e Nuno";

	printf("%s\n", ft_strchr(str, 'm'));

	return (0);
} */