#include <stdio.h>
#include <stdlib.h>

/*
Voc� deve fazer um programa que leia um valor qualquer
e apresente uma mensagem dizendo em qual dos seguintes intervalos
([0,25], (25,50], (50,75], (75,100]) 
este valor se encontra. 
Obviamente se o valor n�o estiver em nenhum destes intervalos, 
dever� ser impressa a mensagem �Fora de intervalo�.

O s�mbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 at� o valor 50.0000000

*/

int main(int argc, char *argv[]) {
	double
	entrada,
	aux; // ajuda a organizar a bagunca
	
//Entrada
	scanf ("%lf",&entrada);
//Processamento
	if (entrada >= 0 && entrada <=25.00) {
		printf ("Intervalo [0,25]\n");
	} else if (entrada >= 25.00 && entrada <=50.00) {
		printf ("Intervalo (25,50]\n");
	} else if (entrada >= 50.00 && entrada <=75.00) {
		printf ("Intervalo (50,75]\n");
	} else if (entrada >= 75.00 && entrada <=100.00) {
		printf ("Intervalo (75,100]\n");
	}
	
	
//Saida Default
	if (entrada < 0 || entrada >= 100.01) {
		printf ("Fora de intervalo\n");
	}
		
	return 0;
	system("pause");
}
