#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	int i, j,media,alturatotal=0,alunosinf=0;
	int Alunos[3][2];
	for ( i = 0; i < 3; i++)
	{
		printf("Diz a idade e depois a altura %dº aluno\n", i+1);

		for (j = 0; j < 2; j++)
		{
			
			scanf_s("%d", &Alunos[i][j]);
			getchar();
		}
	}
	for (i = 0; i < 3; i++)
	{
		alturatotal=alturatotal+ Alunos[i][1];
	}
	media = alturatotal / 3;

	for (i = 0; i < 3; i++) {
		j = 0;
		if (Alunos[i][j] >= 13)
		{
			j = 1;
			if (Alunos[i][j] < media)
			{
				alunosinf++;
			}
		}
	}
	printf("%d alunos têm altura inferior á média. media é %d", alunosinf, media);
return 0;
}