#include <stdio.h>
#include <stdlib.h>

/*
URI Online Judge | 1073
Leia um valor inteiro N.
Apresente o quadrado de cada um dos valores pares,
de 1 até N, inclusive N, se for o caso.
*/

int main () {
	int i =2, N =0;
//Entrada
	scanf ("%d", &N);
//Processamento & Saida
	for (N>5 && N<2000; i <= N; i+=2) {		
		printf ("%d^2 = %d\n", i, i*i);
	}	
	return 0;
}