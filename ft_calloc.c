/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:39:28 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/18 14:26:15 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (0);
	total = nmemb * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*A funcao calloc (abreviacao de alocacao continua) 
e utilizada em C para alocacao dinamica de memoria,
que permite reservar espaço na heap(e uma estrutura de dados 
que permite ser usadaatraves de um array sem a necessidade de pointers)
durante a execucao do programa*/

/* #include <stdio.h>

int	main(void)
{
	int		*a;
	size_t	i;
	size_t	nmemb;

	nmemb = 10; // numero de membros
	
	a = ft_calloc(nmemb, sizeof(int)); 
	// aloca memória para o numero de membros inteiros(nmemb)

	if (a == 0) // verifica se falhou a alocação
	{
		printf("Erro ao alocar memória\n");
		return (1);
	}

	printf("Valores do aay:\n"); // imprime os valores (devem ser todos 0)
	i = 0;
	while (i < nmemb)
	{
		printf("a[%zu] = %d\n", i, a[i]);
		i++;
	}

	a[0] = 42; // altera alguns valores
	a[1] = 26;

	printf("\nDepois de alterar:\n");
	i = 0;
	while (i < nmemb)
	{
		printf("a[%zu] = %d\n", i, a[i]);
		i++;
	}

	free(a); // liberta a memória
	return (0);
} */
