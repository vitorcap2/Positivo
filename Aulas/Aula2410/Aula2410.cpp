// Aula2410.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void exemploswitch()
{
	printf("Escolha um opcao\n");
	printf("1 - a\n2 - b\n3 - c\n4 - d\n");

	int op = 0; 
	scanf_s("%i", &op);

	switch (op)
	{
	case 1:
		printf("Voce escolhe a\n");
		break;
	case 2:
		printf("Voce escolheu b\n");
		break;
	case 3:
		printf("Voce escolheu c\n");
		break;
	case 4:
		printf("Voce escolheu d\b");
		break;
	case 5:
		printf("Opcao invalida\n");
		break;
	}

}


int main()
{

	system("pause");
    return 0;
}

