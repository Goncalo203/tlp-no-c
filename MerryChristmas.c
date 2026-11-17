#include <stdio.h>
#include <locale.h>
main(void) {
	setlocale(LC_ALL, "");
	char* pessoas[] = { "Ronaldo", "Messi", "Neymar" }, *pt[] = {"chouriço", "Queijo", "Pastel de Nata"}, d; //pt-produtostipo
	int tpp[3] = { 0 , 0, 0 }, ptt[3] = {0 , 0, 0}, p, q, pes, i; //tpp-totalprodutospessoa ptt-produtostotaltipo p-produtos q-quantidade pes-pessoa
	do
	{
        printf("Ronaldo = 0 Messi = 1 Neymar = 2\n");
	    scanf_s("%d", &pes);
	    getchar();
	    printf("Diz o produto Chouriço = 0 Queijo = 1 Pastel Nata = 2\n");
		scanf_s("%d", &p); getchar();
		printf("Quantos\n");
		scanf_s("%d", &q); getchar();
		ptt[p] = ptt[p] + q;
		tpp[pes] = tpp[pes] + q;
		printf("Queres continuar?\n");
		scanf_s("%c",&d);
	} while (d != 'n');
	for (i = 0; i != 3; i++)
	{
     printf("%d - total pessoa %s \n", tpp[i], pessoas[i]);
	}
	for (i = 0; i != 3; i++)
	{
	printf("%d - total tipo %s\n", ptt[i], pt[i]);
	}
	printf("total - %d\n", ptt[0] + ptt[1] + ptt[2]);
	return 0;
}