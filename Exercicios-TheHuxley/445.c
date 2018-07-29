#include <stdio.h>

/*
* Problema 445
*/

int aluguel(int diaria, int kmRodados) {
    int cotaQuilometragem = diaria * 100,
        precoDia = diaria * 90;

    double total =0;

    if (kmRodados > cotaQuilometragem) {
        total = (kmRodados-100) + precoDia;

    }
    if (kmRodados < cotaQuilometragem) {
        total = precoDia;

    }
    printf ("%.2lf", total);
}

int main () {
    int dia =0, km =0;

//Entrada
    scanf ("%d%d", &dia, &km);
    aluguel (dia, km);
    return 0;
}