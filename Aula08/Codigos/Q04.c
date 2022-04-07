#include <stdio.h>

int main()
{
	int i;
	int n;
	
	printf("Digite o limite superior: ");
	scanf("%d", &n);
	
	
	for(i = 1; i <= n; i++)
	{
		if(i % 5 == 0)
		{
			printf("%d\n", i);
		}
	}
	
 	return 0;
}
