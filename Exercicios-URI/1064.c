#include <stdio.h>
#include <stdlib.h>

/*
Leia 6 valores. Em seguida,
mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados,
com um dígito após o ponto decimal.
*/

int main () {
	float entrada=0, media=0;
	int positivos=0, i=1;
//Entrada && Processamento
	while (i<=6) {
		i++;
		scanf ("%f", &entrada);
		if (entrada > 0) {
			positivos += 1;
			if (entrada > 0) media += entrada;		
		}

	}
	media = media / positivos;
//Saida	
	printf ("%d valores positivos\n", positivos);
	printf ("%.1f\n", media);
	return 0;
}