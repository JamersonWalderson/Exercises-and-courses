#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 Faça um programa que leia o nome de um vendedor,
 o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
 Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, 
 informar o total a receber no final do mês, com duas casas decimais.

 */

int main(int argc, char *argv[]) {
	char nome[10];
	double salarioFixo, totalVendas, salarioFinal;
	
	scanf("%s%lf%lf",&nome, &salarioFixo, &totalVendas);
	salarioFinal = (totalVendas *0.15) + salarioFixo;
	
	printf ("TOTAL = R$ %.2lf\n", salarioFinal);
	return 0;
}
