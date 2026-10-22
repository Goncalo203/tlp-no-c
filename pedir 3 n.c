#include <stdio.h>
	int main()
{
	int n1, n2, n3, sim;
	printf("Diz o primeiro numero");
	scanf_s("%d", &n1);
	printf("Diz o segundo numero ");
	scanf_s("%d", &n2);
	printf("Diz o terceiro numero ");
	scanf_s("%d", &n3);
	sim = n1;
	if (sim< n2)
	{
		sim = n2;
	}
	if (sim < n3)
	{
		sim = n3;
	}
	printf("The biggest number is: %d\n", sim);

	return 0;
}