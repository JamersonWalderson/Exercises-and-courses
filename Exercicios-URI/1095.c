#include <stdio.h>
#include <stdlib.h>

/*
URI Online Judge | 1095
Você deve fazer um programa que apresente
a sequencia conforme o exemplo abaixo.
*/

int main () {

int i =1,
    j =60;

//Processamento && Saida
  printf("I=1 J=60\n");
  while (j != 0) {
    i = i +3;
    j = j -5;
    printf("I=%d J=%d\n", i, j);
  }


return 0;
}
