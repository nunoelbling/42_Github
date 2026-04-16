/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:48:47 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/16 13:26:53 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = s;
	while (n--)
	{
		*temp = (unsigned char)c;
		temp++;
	}
	return (s);
}

/* #include <unistd.h>
int	main(void)
{
	char s[] = "alo";

	printf("valores:%s \n", s);
	ft_memset(s, 'a', 11);
	printf("valores:%s \n", s);
	return (0);
} */
