#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 Fa�a um programa que leia o nome de um vendedor,
 o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). 
 Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, 
 informar o total a receber no final do m�s, com duas casas decimais.

 */

int main(int argc, char *argv[]) {
	char nome[10];
	double salarioFixo, totalVendas, salarioFinal;
	
	scanf("%s%lf%lf",&nome, &salarioFixo, &totalVendas);
	salarioFinal = (totalVendas *0.15) + salarioFixo;
	
	printf ("TOTAL = R$ %.2lf\n", salarioFinal);
	return 0;
}
