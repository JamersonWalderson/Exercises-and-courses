#include <stdio.h>
#include <stdlib.h>
/*
Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.
*/
int main () {
int
N =0,
i =0,
div =0;
//Entrada
	scanf ("%d", &N);
//Processamento && Saida
	if (N < 10000) {
		while (i < 10000) {
			i++;
			div = i%N;
			if (div==2) printf("%d\n", i);
		}
	}

	return 0;
}