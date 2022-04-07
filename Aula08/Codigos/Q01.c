#include <stdio.h>

int main()
{
	
	int fatorial = 1;
	int numero;
	int i;
	
	printf("Calculo do fatorial\n");
	printf("Digite o numero que deseja calcular: ");
	scanf("%d", &numero);
	
	for(i = 2; i <= numero; i++)
	{
		fatorial *= i;
	}
	
	printf("Resultado: %d", fatorial);
	
 	return 0;
}
