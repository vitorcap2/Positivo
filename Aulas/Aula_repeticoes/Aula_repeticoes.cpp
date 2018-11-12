// Aula_repeticoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void informarSeValoresEstaoEmOrdemCrescente()
{
	int n1, n2, n3, n4, n5, numero;
	int i = 0;



	while (i < 5)
	{     
		LerValorInteiro = n1, n2, n3, n4, n5();
		numero = LerValorInteiro();

		if (i == 0)
		{
			n1 = numero;
		}
		else if (i == 1)
		{
			n2 = numero;
		}
		else if (i == 2)
		{
			n3 = numero;
		}
		else if (i == 3)
		{
			n4 = numero;
		}
		else if (i == 4)
		{
			n5 = numero;
		}
		

			i++;
}

	if ((n1 < n2) && (n2 < n3) && (n3 < n4) && (n4 < n5))
	{
		printf("Os valores estavam em ordem crescente");
	}
	else
	{
		printf("Os valores estavam em odem crescente");
	}

}


int main()
{
	informarSeValoresEstaoEmOrdemCrescente();
		printf("\n\n");
		system("pause");
    return 0;
}

