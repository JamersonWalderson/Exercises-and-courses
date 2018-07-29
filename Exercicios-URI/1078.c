#include <stdio.h>
#include <stdlib.h>

/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N
*/

int main () {
int
N =0, //Entrada dos dados
i =0;

//Entrada
	scanf ("%d", &N);
//Processamento && Saida
	if (N > 2 && N <= 1000)
		while (i < 10) {
			i++;
			printf ("%d x %d = %d\n", i, N, i*N);
		}
	return 0;
}