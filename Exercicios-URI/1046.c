#include <stdio.h>
#include <stdlib.h>

/*
Leia a hora inicial e a hora final de um jogo.
A seguir calcule a dura��o do jogo,
sabendo que o mesmo pode come�ar em um dia e terminar em outro,
tendo uma dura��o m�nima de 1 hora e m�xima de 24 horas.
*/

int main(int argc, char *argv[]) {
	int
	horaInicio,
	horaTermino,
	aux,
	duracao;
/*Entrada*/	
	scanf ("%d%d", &horaInicio, &horaTermino);
/*Processamento & Saida*/	
		if (horaInicio==0 && horaTermino==0) printf ("O JOGO DUROU 24 HORA(S)\n");
		
		if (horaInicio < horaTermino) {
			duracao = horaTermino - horaInicio;
				if (duracao>=1 && duracao<=24)printf ("O JOGO DUROU %d HORA(S)\n", duracao);
		}
		if (horaInicio > horaTermino) {
			aux = 24 - horaInicio;
			duracao = aux + horaTermino;
			if (duracao>=1 && duracao<=24)printf ("O JOGO DUROU %d HORA(S)\n", duracao);
			
		} 
	return 0;
}
