#include <stdio.h>
#include <stdlib.h>

/*
URI Online Judge | 1079
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir.
Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal.
Apresente a média ponderada para cada um destes conjuntos de 3 valores,
sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
*/


int main () {

	int
	N =0,
	i =0;
	float
	nota1, nota2, nota3;
		

//Entrada
	scanf ("%d", &N);
	float media[30] = {0};
//Processamento
	while (i < N) {
		
		scanf ("%f%f%f", &nota1, &nota2, &nota3);
		nota1 *= 2;
		nota2 *= 3;
		nota3 *= 5;
		media[i] = (nota1+nota2+nota3) /10;
		printf("%.1f\n", media[i]);
		//printf("Media:. %.1f\n", media[i]);

		i++;
	}
//Saida
	/*
	for (i=0; i<N; i++) {
		printf("%.1f\n", media[i]);
	}
	*/
	return 0;
}