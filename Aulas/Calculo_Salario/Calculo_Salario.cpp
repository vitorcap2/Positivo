// Calculo_Salario.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void salario()
{
	float valor = 0;
	printf("Informe seu salario\n");
	scanf_s("%f", &valor);


	float calculaIR(float salario,float aliquota, )
		void apresentaIR()
		{
			float salario = valor();
			float impostodevido = 0;
			if (salario <= 1903.98)
			{
				printf("Isento");
			}
			else if (salario <= 2826.65)
			{
				impostodevido = (salario * 0.075) - 142.8;
				printf("a aliquota aplicada foi de 7.5%%, deducao: 142.80, imposto devido: %.2f", impostodevido);
			}
			else if (salario <= 3751.05)
			{
				impostodevido = (salario * 0.15) - 354.8;
				printf("a aliquota aplicada foi de 15%%, deducao: 354.80, imposto devido: %.2f", impostodevido);
			}
			else if (salario <= 4664.68)
			{
				impostodevido = (salario * 0.225) - 636.13;
				printf("a aliquota aplicada foi de 22.5%%, deducao: 636.13, imposto devido: %.2f", impostodevido);
			}
			else
			{
				impostodevido = (salario * 0.275) - 869.36;
				printf("a aliquota aplicada foi de 27.5%%, deducao: 869.36, imposto devido: %.2f", impostodevido);
			}
		}
	}
}
	


int main()
{
	apresentaIR();
	printf("\n\n");
	system("pause");
    return 0;
}

