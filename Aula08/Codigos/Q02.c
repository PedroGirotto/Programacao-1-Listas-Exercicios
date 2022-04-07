#include <stdio.h>

int main()
{
	int numeroA, numeroB;
	int resultado = 0;
	
	printf("Calcular a multiplicacao\n");
	printf("Expressao:\n A*B = C\n");
	printf("Digite um valor para A: ");
	scanf("%d", &numeroA);
	printf("Digite um valor para B: ");
	scanf("%d", &numeroB);
	
	for(int i = 0; i < numeroB; i++)
	{
		resultado += numeroA;
	}
	
	printf("%d", resultado);
	
 	return 0;
}
