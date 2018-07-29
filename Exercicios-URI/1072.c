#include <stdlib.h>
#include <stdio.h>

/*
URI Online Judge | 1072
Leia um valor inteiro N.
Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20]
e quantos estão fora do intervalo, mostrando essas informações.
*/

int main () {
	int
	N =0, //Entrada
	i =0,
	X, //Valores lidos a serem processados
	in =0, //Dentro
	out =0; //Fora
//Entrada
	scanf ("%d", &N);
//Processamento
		for (N<1000; i < N; i++) {
			scanf ("%d", &X);
			if (X >= 10 && X <= 20) {
				in++;
			} else {
				out++;
			}
		}
//Saida
		printf ("%d in\n", in);
		printf ("%d out\n", out);

	return 0;
}