/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:07:57 by nuelblin          #+#    #+#             */
/*   Updated: 2026/05/11 15:12:58 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			last = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
		last = (char *)&s[i];
	return (last);
}

/* a funcao strrchr e a reverse da funcao strchr esta ao contrario 
da original encontra o ultimo caracter escolhido dentro da string e
retorna a pertir do ultimo caracter*/

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "hello world";

	printf("%s\n", ft_strrchr(str, 'l'));
	return (0);
} */
