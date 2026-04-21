/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:59:05 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/21 18:49:38 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s) + 1;
	dest = (char *)malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, len);
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	printf(":%s:", ft_strdup("alo"));
	return(0);
} */
