#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, media;
	printf("Poe o primeiro numero");
	scanf_s("%f", &n1);
	printf("Poe o segundo numero");
	scanf_s("%f", &n2);
	printf("Poe o segundo numero");
	scanf_s("%f", &n3);
	printf("Poe o segundo numero");
	scanf_s("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("Media: %.2f", media);
	return 0;
}