#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia o número de um funcionário, 
seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais. 
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
