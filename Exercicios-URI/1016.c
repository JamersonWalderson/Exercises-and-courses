#include <stdio.h>
#include <stdlib.h>

/*
Dois carros (X e Y) partem em uma mesma dire��o. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.

Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quil�metros do carro X, ou seja, consegue se afastar um quil�metro a cada 2 minutos.

Leia a dist�ncia (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa dist�ncia do outro carro.

*/

int main(int argc, char *argv[]) {
	int 
	X , //Carro que esta a 60 Km/h
	Y, //Carro que esta a 90Km/h
	percorreu, //Distancia que leva para o carro Y tomar essa distancia do outro carro
	dados; //Entrada
	
	//Entrada
	scanf ("%d", &dados);
	
	//Processamento
	percorreu = 2 * dados;
	
	//Saida
	printf ("%d minutos\n", percorreu);
	return 0;
}
