#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
URI 1066
Leia 5 valores Inteiros.
A seguir mostre quantos valores digitados foram pares, 
uantos valores digitados foram ímpares,
quantos valores digitados foram positivos e quantos valores digitados foram negativos.
*/
int main() {
	int i=1, par=0, impar=0, positivo=0, negativo=0, resto=0;
	float entrada, x=2.0;
//Entrada
	while (i<=5){		
		i++;
		scanf ("%f", &entrada);
		resto = fmod(entrada,x	);
		if (resto == 0) par++;
		if (resto != 0) impar++;
		if (entrada > 0) positivo++;
		if (entrada < 0) negativo++;
		resto = 0;
	}

//Processamento

//Saida
	printf ("%d valor(es) par(es)\n", par);
	printf ("%d valor(es) impar(es)\n", impar);
	printf ("%d valor(es) positivo(s)\n", positivo);
	printf ("%d valor(es) negativo(s)\n", negativo);
	return 0;
}
