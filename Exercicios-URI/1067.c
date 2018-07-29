#include <stdlib.h>
#include <stdio.h>

/*
URI Online Judge | 1067
Leia um valor inteiro X (1 <= X <= 1000).
Em seguida mostre os ímpares de 1 até X,
um valor por linha, inclusive o X, se for o caso.
*/

int main() {
	int entrada=0, i=0;
//Entrada
	scanf ("%d", &entrada);

//Processamento && Saida
	for (i; i<=entrada; i++)
		if ((i%2)!=0) printf ("%d\n", i);

	return 0;
}