#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 6 valores.
Estes valores serão somente negativos ou positivos
(desconsidere os valores nulos).
A seguir, mostre a quantidade de valores positivos digitados.
*/

int main () {
	float entrada=0;
	int positivos=0, i=1;
//Entrada
	while (i<=6) {
		i++;
		scanf ("%f", &entrada);
		if (entrada > 0) positivos += 1;
	}
//Processamento

//Saida	
	printf ("%d valores positivos\n", positivos);
	return 0;
}