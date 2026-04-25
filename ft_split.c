/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:20:53 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/25 11:57:39 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	char	**ft_free(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*sep;
	int		i;

	if (!s)
		return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		sep = ft_strchr(s, c);
		if (!sep)
			sep = (char *)s + ft_strlen(s);
		res[i++] = ft_substr(s, 0, (size_t)(sep - s));
		if (!res[i - 1])
			return (ft_free(res, i - 1));
		s = sep;
	}
	return (res[i] = NULL, res);
}

/*#include <stdio.h>

int main(void)
{
    char **res;
    int  i;

    i = 0;

    res = ft_split("alalalallalalallalald,svlksna faf ga ", 'a');

    if (!res)
        return (1);
    while (res[i] != NULL)
    {
        printf("Palavra %d: :%s:\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    
    return (0);
} */
