/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno1tap <nuno1tap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:01:14 by nuno1tap          #+#    #+#             */
/*   Updated: 2026/04/22 19:58:55 by nuno1tap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	lenght;

    if(!s)
        return (NULL);
    lenght = ft_strlen(s);
    if (start >= lenght)
        return (ft_strdup(""));
    if (len > lenght - start)
        len = lenght - start;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
    	return (NULL);
    ft_strlcpy(str, s + start, len + 1);
    return (str);
}

/* #include	<stdio.h>

int	main(void)
{
	printf(":%s:", ft_substr("0123456789 Alo o meu nome e Nuno", 11, 3));
	return(0);
} */
