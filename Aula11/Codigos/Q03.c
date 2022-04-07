#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char nome[50];
	char nomeMax[50];
	
	char palavra[50];
	char brincar[50];
	
	char escolha;
	
	int tamanho, max = 0;
	int i;
	
	float numero;

	do
	{
		system("CLS");
		printf(" ####### MENU ####### \n");
		printf("A - Imprimir o nome com maior quantidade de caracteres.\n");
		printf("B - Brincar com palavra.\n");
		printf("C - Raiz quarta.\n");
		printf("F - Sair.\n");
		fflush(stdin);
		scanf("%c", &escolha);
		
		switch(escolha)
		{
			case 'A':
				for(i = 0; i < 20; i++)
				{
					fflush(stdin);
					printf("Digite nome: ");
					gets(nome);
				
					tamanho = strlen(nome);
					if(max < tamanho)
					{
						max = tamanho;
						strcpy(nomeMax, nome);
					}
				}
				printf("Maior nome: %s\n", nomeMax);
				printf("Tamanho: %d\n", max);
				system("PAUSE");
				
			case 'B':
				fflush(stdin);
				printf("Digite uma palavra: ");
				gets(palavra);
				
				tamanho = strlen(palavra);
				for(i = 1; i <= tamanho; i++)
				{
					strncpy(brincar, palavra, i);
					printf("%s\n", brincar);
					fflush(stdin);
				}
				system("PAUSE");
				
			case 'C':
				printf("Digite um numero: ");
				scanf("%f", &numero);
				
				printf("Raiz quarta: %f\n", pow(numero, 0.25));
				system("PAUSE");
		}
			
		
	}
	while(escolha != 'F');

 	return 0;
}
