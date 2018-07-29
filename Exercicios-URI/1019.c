#include <stdio.h>
#include <stdlib.h>

/*
Leia um valor inteiro, 
que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
e informe-o expresso no formato horas:minutos:segundos.
*/

int main(int argc, char *argv[]) {
	int h = 0, 
	min = 0, 
	seg = 0, 
	N = 0;
	
	//entrada
	scanf ("%d", &N);
	
	
	//processamento
	int aux;
	if (N < 60 ) {
		seg = N;
	}		
	if (N > 60) {
		h = N /3600;			//3600 segundos e o mesmo que 1 hora
		min = (N %3600) /60;		
		aux = N %60;
		seg = aux;
	}
		
	//saida
	printf ("%d:%d:%d\n",h ,min, seg);
	return 0;
}
