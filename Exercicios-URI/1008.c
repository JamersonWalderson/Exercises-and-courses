#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia o n�mero de um funcion�rio, 
seu n�mero de horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio.
A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais. 
*/

int main(int argc, char *argv[]) {
	int numero;
	float horasTrabalhadas, precoHora, salario;
	
	scanf ("%d%f%f",&numero, &horasTrabalhadas, &precoHora);
	salario = precoHora *horasTrabalhadas;
	
	printf ("NUMBER = %d\n", numero);
	printf ("SALARY = U$ %.2f\n", salario);
	return 0;
}
