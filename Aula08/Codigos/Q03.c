#include <stdio.h>

int main()
{
	int i;
	int soma = 0;

	for(i = 100; i <= 200; i++)
	{
		if(i%2 == 0)
		{
			printf("%d\n", i);
			soma += i;
		}
	}

	printf("\nSoma: %d", soma);

 	return 0;
}
