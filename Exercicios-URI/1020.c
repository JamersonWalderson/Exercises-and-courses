#include <stdio.h>
#include <stdlib.h>

/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, 
meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, 
como 360, 363 ou 364. 
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
 */

int main(int argc, char *argv[]) {
	int
	entrada, //Valor em dias
	ano = 0,
	mes = 0,
	dia = 0,
	aux = 0; // ajuda a organizar a bagaça
	
	//Entrada
	scanf ("%d", &entrada);
	
	//Processamento
	
	ano = entrada /365;
	mes = (entrada %365) /30;
	dia = (entrada%365) %30;
	
	//Saida
	printf ("%d ano(s)\n", ano);
	printf ("%d mes(es)\n", mes);
	printf ("%d dia(s)\n", dia);
	
	return 0;
}
