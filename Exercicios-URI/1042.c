#include <stdio.h>
#include <stdlib.h>

/*
URI Online Judge | 1042
Leia 3 valores inteiros e ordene-os em ordem crescente.
No final, mostre os valores em ordem crescente,
uma linha em branco e em seguida, os valores na sequência como foram lidos.
*/

int main () {
int
i =0,
x =0,
entrada =0,
crescente[4] = {0},
original[4] = {0};

//Entrada
	for (i=0; i<3; i++) {
		scanf ("%d", &original[i]);
	}
		
//Processamento
	for (i=0; i<3; i++) {
		if (original[i] < original[x+=2])
	}
//Saida	
	for (i=0; i<3; i++) 
		printf ("*Ordem original:. %d\n", original[i]);
		printf ("\n\n**Ordem crescente:. %d\n", crescente[i]);

	return 0;
}