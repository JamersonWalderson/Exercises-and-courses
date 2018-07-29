#include <stdio.h>
/*
* Problema 17
* Faça um programa que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).
*/


int main() {
    int entrada =0,
        antecessor =0,
        sucessor =0,
        aux =0;

    scanf ("%d", &entrada);
    sucessor = entrada + 1;
    antecessor = entrada - 1;

    printf ("%d %d", antecessor, sucessor);
    return 0;
}