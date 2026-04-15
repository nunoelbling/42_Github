#include <stdlib.h>


void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total;

	
	if (nmemb != 0 && size > (size_t)-1 / nmemb) // proteção de overflow
		return (0);

	total = nmemb * size;

	ptr = (unsigned char *)malloc(total);
	if (!ptr) // comfirmar que o malloc funcionou e que ha espaco na mem
		return (0);

	i = 0;
	while (i < total)
	{
		ptr[i] = 0; // meter tudo a 0
		i++;
	}
		
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	int		*arr;
	size_t	i;
	size_t	nmemb;

	nmemb = 10;
	
	arr = ft_calloc(nmemb, sizeof(int)); // aloca memória para o numero de membros inteiros(nmemb)
	
	if (arr == 0) // verifica se falhou a alocação
	{
		printf("Erro ao alocar memória\n");
		return (1);
	}

	printf("Valores do array:\n"); // imprime os valores (devem ser todos 0)
	i = 0;
	while (i < nmemb)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}

	arr[0] = 42; // altera alguns valores
	arr[1] = 26;

	printf("\nDepois de alterar:\n");
	i = 0;
	while (i < nmemb)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}

	free(arr); // liberta a memória
	return (0);
}