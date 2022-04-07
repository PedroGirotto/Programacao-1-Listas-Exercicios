#include <stdio.h>
#include <string.h>

int main()
{
	char nome[100];
	char usuario[15];
	
	printf("Digite nome do livro: ");
	gets(nome);
	printf("Digite tipo do usuario (professor ou aluno): ");
	gets(usuario);
	strupr(usuario);
	
	int prof = strcmp(usuario, "PROFESSOR");
	int alun = strcmp(usuario, "ALUNO");
	
	if(prof == 0)
	{
		printf("Nome do livro: %s\n", nome);
		printf("Tipo de usuario: %s\n", usuario);
		printf("Total de dias: 10");
	}
	else if(alun == 0)
	{
		printf("Nome do livro: %s\n", nome);
		printf("Tipo de usuario: %s\n", usuario);
		printf("Total de dias: 3");
	}
	else
	{
		printf("Tipo de usuario invalido!\n");
	}
	
 	return 0;
}
