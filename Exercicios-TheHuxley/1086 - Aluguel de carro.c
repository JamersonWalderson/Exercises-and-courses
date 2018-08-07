#include <stdio.h>

/*
* Problema 1086
*/

double totalAluguel(int dias, int kmRodados) {
    int precoDiaria = dias * 30;
    double precoKmRodados = kmRodados * 0.01;
    
    double total = (precoDiaria + precoKmRodados) * 0.9;
    printf ("%.2lf\n", total);

}

int main () {
    int x, y;

    scanf ("%d%d", &x, &y);
    totalAluguel (x, y);

    return 0;
}