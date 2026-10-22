#include <stdio.h>
int main()
{
	float n;
	printf("Diz a nota: ");
	scanf_s("%f", &n);
	if (n < 9.5)
	{
		printf("Reprovado\n");

	}
	else {
		printf("Aprovado\n");
	}

	return 0;
}