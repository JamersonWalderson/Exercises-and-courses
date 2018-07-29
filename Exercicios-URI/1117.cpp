#include <iostream>
#include <cstdlib>
using namespace std;
/*
URI Online Judge | 1117

Faça um programa que leia as notas referentes às
duas avaliações de um aluno.
Calcule e imprima a média semestral.
Faça com que o algoritmo só aceite notas válidas
(uma nota válida deve pertencer ao intervalo [0,10]).
Cada nota deve ser validada separadamente.
*/

double media(double n1, double n2);

int main() {
    double entrada,
        primeiraNota,
        segundaNota;

    int notasValidas =0; 

//Entrada
    do {
        cin >> entrada;
        if (entrada >= 0.0 && entrada <=10.0) {
            //Auxilia o loop a parar quando tiver 2 notas validas.
            notasValidas++; 
            //As duas notas validas
            if (notasValidas < 2) primeiraNota = entrada; else segundaNota = entrada;
        } else {
            cout << "nota invalida\n";
        }
    } while (notasValidas != 2);   
//Processamento

//Saida
    cout << "media = " << media(primeiraNota, segundaNota) << "\n";
    return 0;
}

double media(double n1, double n2) {
    double resultado;
    resultado = (n1+n2) /2.00;
    return resultado;
}