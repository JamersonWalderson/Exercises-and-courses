#include <stdlib.h>
#include <stdio.h>

/*
Faça um programa que leia 5 valores inteiros.
Conte quantos destes valores digitados são pares e mostre esta informação.
*/

int main () {
	int entrada=0, par=0, i=0;
//Entrada
	while (i<5) {
		i++;
		scanf ("%d", &entrada);
		if (entrada %2 ==0) par++;
	}
//Processamento && Saida	
	printf ("%d valores pares\n", par);
	return 0;
}