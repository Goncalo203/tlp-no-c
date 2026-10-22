#include <stdio.h>
int main()
{
	float kmi,kmf, l, km100;
	printf("Quantos km iniciais");
	scanf_s("%f", &kmi);
	printf("Quantos km finais");
	scanf_s("%f", &kmf);
	printf("Quantos litros de gasolina gastou");
	scanf_s("%f", &l);
	km100 = 100*l/(kmf-kmi);
	printf("A cada 100 km voce gastara %.2f km de combustivel", km100);
	return 0;
}