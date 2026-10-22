#include <stdio.h>
int main()
{
	int n = 1;
	while (n != 0)
	{
		printf("Diz um numero: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("O numero digitado e negativo.\n");
		}
		if (n>0)
		{
			printf("O numero digitado e positivo.\n");
		}
		else
		{
			printf("Digitar 0 vai sair do programa.\n");
		}
	}
	return 0;
}