#include <stdlib.h>
#include <stdio.h>

/*
URI Online Judge | 1094
Maria acabou de iniciar seu curso de graduação na faculdade de medicina
e precisa de sua ajuda para organizar os experimentos de um laboratório
o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias
foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza
três tipos de cobaias: sapos, ratos e coelhos.
Para obter estas informações, ela sabe exatamente o
número de experimentos que foram realizados,
o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.


*/

int main() {

	int i =0, //iteracao
		N =0, //Entrada da quantidade de casos de teste
		quantia =0, //Dado que indica quantidade de algum caso
		totalCobaias =0,
		totalCoelhos =0,
		totalRatos =0,
		totalSapos =0;
	char
		cobaia;
	float
		percentualCoelhos = 0.00,
		percentualRatos = 0.00,
		percentualSapos = 0.00;

//Entrada
	scanf ("%d", &N);
//Processamento
	N *= 2; //Dobra o valor de N para que seja uma entrada de numero e a outra letra.
	for (i=0; i < N; i++) {
		
		/*// Se a entrada for invalida para o programa*/
		scanf ("%d", &quantia);
		scanf ("%c", &cobaia);		
		//if (quantia < 1 || quantia > 15) return 0;

		if (cobaia == 'C') {
			totalCoelhos += quantia;
			totalCobaias += quantia;
		}
		if (cobaia == 'R') {
			totalRatos += quantia;
			totalCobaias += quantia;
		}
		if (cobaia == 'S') {
			totalSapos += quantia;
			totalCobaias += quantia;
		}
	}
	/*// Percentual*/
	float 
		ftotalCoelhos,
		ftotalRatos,
		ftotalSapos;
	/*// Converte de inteiro para flutuante*/
	ftotalCoelhos = (float) totalCoelhos;	
	ftotalRatos = (float) totalRatos;
	ftotalSapos = (float) totalSapos;

	percentualCoelhos = (ftotalCoelhos *100) /totalCobaias;
	percentualRatos = (ftotalRatos *100) /totalCobaias;
	percentualSapos = (ftotalSapos *100) /totalCobaias;


//Saida
	printf ("Total: %d cobaias\n", totalCobaias);
	printf ("Total de coelhos: %d\n", totalCoelhos);
	printf ("Total de ratos: %d\n", totalRatos);
	printf ("Total de sapos: %d\n", totalSapos);
	printf ("Percentual de coelhos: %.2lf %%\n", percentualCoelhos);
	printf ("Percentual de ratos: %.2lf %%\n", percentualRatos);
	printf ("Percentual de sapos: %.2lf %%\n", percentualSapos);
	return 0;
}