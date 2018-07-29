#include <stdio.h>
#include <stdlib.h>

/*
URI Online Judge | 1080
Leia 100 valores inteiros. Apresente então
o maior valor lido e a posição dentre os 100 valores lidos.
*/

int main () {
	int N, //Casos de teste
		X, //Primeira entrada
		Y, //Segunda entrada
		soma,
		aux,
		i;

	scanf ("%d", &N);
	for (N; i<N; i++) {
		scanf ("%d%d", &X, &Y);
		//gambiarra para ordenar X>Y
		if (Y > X) {
    		aux = X;
   			X = Y;
   			Y = aux;
   		}
   		soma =0; //Zera a sequencia para nao somar resultados do loop
   		Y++; //Incremento para que na sequencia nao inicie com Y
   		for (X>Y; Y<X; Y++) {
   			if ((Y%2)==1) soma = soma + Y;
   		}
   		printf("%d\n", soma);
	}

return 0;
}