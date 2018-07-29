#include <stdlib.h>
#include <stdio.h>

/*
URI Online Judge | 1070
Leia um valor inteiro X.
Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
um valor por linha,
inclusive o X ser for o caso.
*/

int main () {
	int i=1, entrada=0, impar=3;
//Entrada
	scanf ("%d", &entrada);
//Processamento
	/*
	while (i<6){
		i++;
		impar = entrada + 3;
		
	}
	*/

	if ((entrada % 2)==0) entrada++;
	for (i; i<=6; entrada+=2) {
		i++;
		printf ("%d\n", entrada);
	}
		
//Saida

	return 0;
}