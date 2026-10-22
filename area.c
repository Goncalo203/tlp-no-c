#include <stdio.h>
#include <locale.h>
int main()
{
	//setlocale
	float l,a;
	printf("Digite o lado de um quadrado:");
	scanf_s("%f", &l);
	a = l * l;
	printf("Area do quadrado: %.2f\n")

	return 0;
}