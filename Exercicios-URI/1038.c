#include <stdio.h>
#include <stdlib.h>

/*
Com base na tabela abaixo,
escreva um programa que leia o código de um item e a quantidade deste item.
A seguir, calcule e mostre o valor da conta a pagar.

COD | ESPECIFICACAO | PRECO
1	Cachorro Quente	R$ 4.00
2	X-Salada		R$ 4.50
3	X-Bacon			R$ 5.00
4	Torrada simples R$ 2.00
5	Refrigerante	R$ 1.50


*/

int main(int argc, char *argv[]) {
	int 
	cod =0,
	multiplicador = 0;
	float
	total = 0;
	
//Entrada
	scanf ("%d%d",&cod, &multiplicador);	
	switch (cod){
//Processamento		
		case 1: //Cachorro Quente
			total = multiplicador * 4.00;
			printf ("Total: R$ %.2f\n", total);
			break;
		case 2:	//X-Salada
			total = multiplicador * 4.50;
			printf ("Total: R$ %.2f\n", total);
			break;
		case 3:	//X-Bacon
			total = multiplicador * 5.00;
			printf ("Total: R$ %.2f\n", total);
			break;
		case 4:	//Torrada simples
			total = multiplicador * 2.00;
			printf ("Total: R$ %.2f\n", total);
			break;
		case 5:	//Refrigerante
			total = multiplicador * 1.50;
			printf ("Total: R$ %.2f\n", total);
			break;
	}	
	
//Saida
	return 0;
}
