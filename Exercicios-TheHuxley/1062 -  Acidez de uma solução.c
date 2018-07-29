#include <stdio.h>

/*
* Problema 1062
*
* Escreva um programa que leia o valor do índice de acidez (pH) de uma solução e informe se ela é ácida, básica ou neutra.
* A solução é ácida quando o pH é menor que 7
* A solução é básica quando o pH é maior que 7
* Caso contrário a solução é neutra
*/

float acidez(float ph) {
    if (ph > 7) return printf ("Basica");
    if (ph < 7) return printf ("Acida");
    if (ph == 7) return printf ("Neutra");
}

int main() {
    float entrada =0.0;
    scanf ("%f", &entrada);

//Processamento & Saida    
    if (entrada > 1.0 && entrada <= 14.0) {
        acidez(entrada);
    }
    return 0;
}