#include <stdlib.h>
#include <stdio.h>

/*
Faça um programa que mostre os números pares entre 1 e 100, inclusive.
*/

int main () {
	int i;
//Entrada
/*
	Este código não tem entradas;
*/
//Processamento && Saida	
	for (i=2; i<=100; i++)
		printf ("%d\n", i++);

	return 0;
}