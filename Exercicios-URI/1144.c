#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
URI Online Judge | 1144

Escreva um programa que leia um valor inteiro N.
N * 2 linhas de saída serão apresentadas na
execução do programa, seguindo a lógica do
exemplo abaixo. Para valores com mais de 6
dígitos, todos os dígitos devem ser apresentados.
*/

int main () {

int N =0,
    i =0,
    a =1,
    b =1,
    c =1;
//entrada
  scanf("%d", &N);
  printf("1 1 1\n");
  printf ("1 2 2\n");
  printf ("2 4 8\n");
//Processamento && Saida
  printf("%d %d %d\n", a, b= a*a, c= a*b);


return 0;
}
