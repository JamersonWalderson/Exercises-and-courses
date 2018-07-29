#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/*
 * URI Online Judge | 1132
 * Escreva um algoritmo que leia 2 valores inteiros X e Y calcule
 * a soma dos números que não são múltiplos de 13 entre X e Y,
 * incluindo ambos.
*/
int main () {
    int i =0,
        aux =0, /* ajuda a organizar a gambiarra */
        primeiroNumero =0,
        segundoNumero =0,
        soma =0;
//Entrada && Processamento
    cin >> primeiroNumero >> segundoNumero;
    /* organiza em ordem crescente */
    if (primeiroNumero > segundoNumero) {
        aux = primeiroNumero;
        primeiroNumero = segundoNumero;
        segundoNumero = aux;
    }

    /* loop */
    i = primeiroNumero;
    while(i <= segundoNumero) {
        if ((i%13)!=0) soma += i;
        i++;
    }
//Saida
    cout << soma << "\n";

    return 0;
}