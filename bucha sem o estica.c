#include <stdio.h>
#include <locale.h>
int main(void)
{
    int n, maior, menor;
    printf("Diz um num ");
    scanf_s("%d", &n);
    maior = n;
    menor = n;
    while (n != 0) {
        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
        printf("Diz um num ");
        scanf_s("%d", &n);
    }
    printf("Maior nun %d\n", maior);
    printf("Menor num %d\n", menor);
    return 0;
}