// Resto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void lerv()
{
	int valor = 0;
	printf("Informe um valor inteiro: \n");
	scanf_s("%i", &valor);
	
	int resto = valor % 5;

	switch (resto)
	{
	case 0:
	{
		printf("O valor de %i e divisivel por 5", valor, resto);
	}
		break;

	case 1:
	{
		printf("O resto da divisal de %i por 5", valor, resto);
	}
		break;
	case 2:
	{
		printf("O resto da divisal de %i por 5", valor, resto);
	}
	break;
	case 3:
	{
		printf("O resto da divisal de %i por 5", valor, resto);
	}
	break;
	case 4:
	{
		printf("O resto da divisal de %i por 5", valor, resto);
	}
	break;

	}

}



int main()
{
	lerv();
	system("pause");
    return 0;
}

