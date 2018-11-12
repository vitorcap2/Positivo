// lista_ex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

/*void multiplos()
{
	int v1 = 0;
	int v2 = 0;
	printf("Informe 2 valores inteiros: \n");
	scanf_s("%i", &v1);
	scanf_s("%i", &v2);
		
		if (v1 % v2 == 0)
		{
			printf("Sao multiplos\n");
		}
		else
		{
			printf("Nao sao multiplos\n");
		}
}




int main()
{
	multiplos();
	printf("\n\n");
	system("pause");
    return 0;
}*/

void exercicio19();
{

	int mat[2][3], i, j,l, resl[3],resc[2],c;
	printf("Infome todos os valores da matriz:\n";
	for (i = 0; i < 2; i++)
	{
		for (j = 0 < 3; j++)
		{

			printf("Linha: %i, Coluna %i ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	printf("QUal a linha voce quer multiplicar?");
	scanf_s("%i", &l);
	printf("Qual vai ser o fator multiplicador?");
	scanf_s("%i", &f);
	for (i = 0, i < 3, i++)
		res[i] = mat[l][i] * f;
	printf("Qual a coluna voce quer multiplicar?");
	scanf_s("%i", &c);
	printf("Qual vai ser o fator multiplicador?");
	scanf_s("%i", &f);
	for (i = 0, i < 2, i++)
		resc[i] = mat[l][i] * f;
}

int main()
{
	exercicio19();
	printf("\n\n");
	system("pause");
	return 0;
}

