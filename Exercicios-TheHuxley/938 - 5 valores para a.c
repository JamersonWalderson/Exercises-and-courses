#include <stdio.h>
/* Escrever um algoritmo que lê 5 valores para "a", um de cada vez, e conta quantos destes são negativos, escrevendo esta informação. */

int main () {
    double a=0;  
    int i =0, negativos =0;;
    
    for (i=0; i<5; i++) {
        printf ("Digite um valor:");
        scanf ("%lf", &a);
        printf ("\n");
        if (a < 0) negativos++;
    }

    printf ("Foram digitados %d numeros negativos", negativos);

return 0;
}