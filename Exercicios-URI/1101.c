#include <stdio.h>
#include <stdlib.h>

/*
Leia um conjunto não determinado de pares de valores M e N
(parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre a sequência do menor até o
maior e a soma dos inteiros consecutivos entre eles
(incluindo o N e M).

*/

int main () {
	
	int i =0,
		M =0, //Primeira entrada
		N =0, //Segunda entrada
		soma =0,
		aux =0; //Ajuda na gambiarra

//Entrada
	do {
		scanf ("%d", &M);
		scanf ("%d", &N);
		if (M<=0) break;
		if (N<=0) break;

		//Para que  M>N
		if (N>M) {
			aux = M;
			M = N;
			N = aux;
		}

		soma =0; //Zera a soma para inciar um novo calculo.
		for (N<M; N<=M; N++) {
			printf("%d ", N);
			soma = soma + N;
		}
		printf("Sum=%d\n", soma);
	} while (M>0 && M!=0 || N>0 && N!=0);
	

	return 0;
}