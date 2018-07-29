#include <stdlib.h>
#include <stdio.h>

int main () {
	float
	salario = 0.0,
	novoSalario = 0.0,
	valorReajuste = 0.0;
	int
	percentual;
//Entrada
	scanf ("%f", &salario);
//Processamento
	if (salario <= 400) {
		novoSalario = salario * 1.15;
		valorReajuste = salario * 0.15;
		percentual = 15;
		}

	if (salario > 400 && salario <= 800) {
		novoSalario = salario * 1.12;
		valorReajuste = salario * 0.12;
		percentual = 12;
		}
	
	if (salario > 800 && salario <= 1200) {
		novoSalario = salario * 1.10;
		valorReajuste = salario * 0.10;
		percentual = 10;
		}


	if (salario > 1200 && salario <= 2000) {
		novoSalario = salario * 1.07;
		valorReajuste = salario * 0.07;
		percentual = 7;
		}

	if (salario > 2000) {
		novoSalario = salario *1.04;
		valorReajuste = salario * 0.04;
		percentual = 4;
		}
//Saida	
	printf ("Novo salario: %.2f\n", novoSalario);
	printf ("Reajuste ganho: %.2f\n", valorReajuste);
	printf ("Em percentual: %d %%\n", percentual);
	return 0;
}