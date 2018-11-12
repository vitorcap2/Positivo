// Aula1211.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

/*int funcaoRecursiva(int parametro);
{
	if (condicaoParada)
		return valorfinal;

	return funcaoRecursiva(parametroAlterado);
}
*/

int soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n + soma(n - 1);
}

int LerNumberInteiro()
{
	int a;
	printf("Informe um numero: ");
	scanf_s("%i", &a);
	return a;
}

int fatorial(int n)
{
	if (n == 0)
		return 1;

	return n * fatorial(n - 1);
}

int main()
{
	int numero = LerNumberInteiro();
	int result = soma(numero);
	printf ("Resultado (soma): %i \n", result);


	int resultFatorial = fatorial(numero);
	printf("Resultado (fatorial): %i \n", resultFatorial);

	system("Pause");
    return 0;
}

