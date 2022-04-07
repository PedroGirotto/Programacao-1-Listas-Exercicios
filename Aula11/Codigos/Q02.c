#include <stdio.h>

int main()
{
	char nomeProduto[50];
	float precoProduto;
	
	printf("Digite o nome do produto: ");
	gets(nomeProduto);
	printf("Digite o preco do produto: ");
	scanf("%f", &precoProduto);
	
	if(0 <= precoProduto && precoProduto < 10.00)
	{
		printf("Lucro: %f\n", precoProduto*1.7);
	}
	else if(10.00 <= precoProduto && precoProduto < 30.00)
	{
		printf("Lucro: %f\n", precoProduto*1.5);
	}
	else if(30.00 <= precoProduto && precoProduto < 50.00)
	{
		printf("Lucro: %f\n", precoProduto*1.4);
	}
	else if(precoProduto >= 50.00)
	{
		printf("Lucro: %f", precoProduto*1.3);
	}
	else
	{
		printf("Valor do produto invalido!");
	}
	
 	return 0;
}
