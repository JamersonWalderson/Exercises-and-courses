#include <stdio.h>
#include <stdlib.h>

/*
Calcule o consumo médio de um automóvel 
sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).
*/

int main(int argc, char *argv[]) {
	int 
	X; //Distancia percorrida
	float
	Y, //Combustivel gasto
	consumo;
	//Entrada de dados
	scanf ("%d%f",&X, &Y);
	
	//Processamento
	consumo = X/Y;
	
	//Saida
	printf ("%.3f km/l\n", consumo);
	
	return 0;
}
