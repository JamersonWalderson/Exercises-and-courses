#include <stdio.h>
#include <stdlib.h>

/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo.
A seguir calcule a duração do jogo.
Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
*/

int main() {
	int horaIn, minIn, tempoIn;
	int horaFi, minFi, tempoFi;
	int tempo, horas, minutos;

	
/*Entrada*/
	scanf ("%d%d%d%d", &horaIn, &minIn, &horaFi, &minFi);
/*Processamento*/
	tempoIn = (horaIn*60) +minIn; //Inicio do jogo em minutos
	tempoFi = (horaFi*60) +minFi; //Fim do jogo em minutos
	tempo = tempoIn - tempoFi;
	
	
	if (tempoIn == tempoFi) {
		horas = 0;
		minutos = 0;
		printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	}
		
	
	
	
	if (tempo <= -1)  {
		tempo = tempo*-1;
		horas = tempo/60;
		minutos = tempo%60;
		printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	} else printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
		
	if (horaIn == horaFi) {
		
	}	
		
	//Problemas nos testes: 1, 

/*Saida*/		
	return 0;
}
