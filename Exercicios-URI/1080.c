#include <stdio.h>
#include <stdlib.h>

/*
URI Online Judge | 1080
Leia 100 valores inteiros. Apresente então
o maior valor lido e a posição dentre os 100 valores lidos.
*/

int main () {

int i=0, entrada =0, maior =0, posicao =0;
//Entrada && Processamento
  do {
    i++;
    scanf ("%d", &entrada);
    if (entrada > maior) {
      maior = entrada;
      posicao = i;
    }
  } while (entrada!=0 && i<100);

//Saida
printf ("%d\n", maior);
printf ("%d\n", posicao);
return 0;
}
