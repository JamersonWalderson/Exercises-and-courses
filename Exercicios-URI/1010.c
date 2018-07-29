#include <stdio.h>
#include <stdlib.h>

/*
Neste problema, deve-se ler o código de uma peça 1, 
o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, 
o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
*/

int main(int argc, char *argv[]) {
	int cod_1, cod_2, uni_1, uni_2;
	float  val_1, val_2;
	
	//Entrada
	scanf ("%d%d%f\n",&cod_1, &uni_1, &val_1);
	scanf ("%d%d%f",&cod_2, &uni_2, &val_2);
	
	//Processamento
	float totalCompra;
	totalCompra = (uni_1 *val_1) + (uni_2 *val_2);
	
	//Saida
	printf ("VALOR A PAGAR: R$ %.2f\n", totalCompra);
	
	return 0;
}
