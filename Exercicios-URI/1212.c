#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
As crianças são ensinadas a adicionar vários dígitos da direita para a esquerda, 
um dígito de cada vez.
Muitos acham a operação "vai 1" (em inglês chamada de "carry",
na qual o valor 1 é carregado de uma posição 
para ser adicionado ao dígito seguinte) 
um desafio significativo. Seu trabalho é para contar
o número de operações de carry para cada um dos problemas
de adição apresentados para que
os educadores possam avaliar a sua dificuldade.
*/

int main () {
	char 
	primeiroValor[10], //Nove números
	segundoValor[10], //Nove números
	/* Já que a função atoi não converte vetor utilizarei a var aux para fazer a conversão*/
	auxPrimeiro, 
	auxSegundo;

	int
	carry =0,
	/*Valores inteiros que serao convertidos e somados para ver e ultrapassa 10 se ultrapassar var carry recebe +1*/
	convPrimeiro[10],
	convSegundo[10],
	resultado,
	i;
	
//Entrada
	gets(primeiroValor);
	gets(segundoValor);	
	
//Processamento		
	for (i=0; i<2; i++){
		/*Parece que atoi nao funciona com vetor, entao tentarei pegar individualmente cada elemento*/
		auxPrimeiro = primeiroValor[i];
		auxSegundo = segundoValor[i];
		
		convPrimeiro[i] = atoi(auxPrimeiro);
		convSegundo[i] = atoi(auxSegundo);
		resultado = convPrimeiro[i] + convSegundo[i] >= 10 ? carry++ : printf ("No carry operation.\n");
		//primeiroValor[i] >= 5 ? carry++ : printf ("No carry operation.\n");	Uma logica que também pode funcionar...
	}				
	
		
//Saida
	printf ("%d carry operations.\n", carry);
		
	system ("pause");
	return 0;
}
