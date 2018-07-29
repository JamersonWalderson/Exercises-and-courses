#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
As crian�as s�o ensinadas a adicionar v�rios d�gitos da direita para a esquerda, 
um d�gito de cada vez.
Muitos acham a opera��o "vai 1" (em ingl�s chamada de "carry",
na qual o valor 1 � carregado de uma posi��o 
para ser adicionado ao d�gito seguinte) 
um desafio significativo. Seu trabalho � para contar
o n�mero de opera��es de carry para cada um dos problemas
de adi��o apresentados para que
os educadores possam avaliar a sua dificuldade.
*/

int main () {
	char 
	primeiroValor[10], //Nove n�meros
	segundoValor[10], //Nove n�meros
	/* J� que a fun��o atoi n�o converte vetor utilizarei a var aux para fazer a convers�o*/
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
		//primeiroValor[i] >= 5 ? carry++ : printf ("No carry operation.\n");	Uma logica que tamb�m pode funcionar...
	}				
	
		
//Saida
	printf ("%d carry operations.\n", carry);
		
	system ("pause");
	return 0;
}
