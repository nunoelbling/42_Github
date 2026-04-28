/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:01:54 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/28 13:26:31 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>

void	make_x(unsigned int i, char *c)
{
	(void)i;
	*c = 'X';
}

int	main(void)
{
	char	str[] = "Hello";

	printf("Antes: %s\n", str);
	ft_striteri(str, make_x);
	printf("Depois: %s\n", str);
	return (0);
}*/