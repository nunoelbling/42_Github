/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:20:53 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/23 16:08:38 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
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

char	**ft_free(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*next_sep;
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
		if (*s)
		{
			next_sep = ft_strchr(s, c);
			if (!next_sep)
				next_sep = (char *)s + ft_strlen(s);
			res[i++] = ft_substr(s, 0, next_sep - s);
			if (!res[i - 1])
				return (ft_free(res, i - 1));
			s = next_sep;
		}
	}
	res[i] = NULL;
	return (res);
}

#include <stdio.h>

int main(void)
{
    char **res;
    int  i;

    i = 0;

    res = ft_split("alalalallalalalalalalallalalallalalalalalald,svlksna faf ga ", 'a');

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
}
