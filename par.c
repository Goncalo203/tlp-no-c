#include <stdio.h>
int main()
{
	int n = 1;
	do
	{
		printf("Diz um numero:\n");
		scanf_s("%d", &n);
		if (n != 0)
		{
			if (n % 2 == 0)
			{
				printf("O numero e par\n ");
			}
			else
			{
				printf("O numero e impar\n");
			}
		}
	} while (n != 0);
	printf("Digitar 0 sai do proprama\n");
	return 0;
}