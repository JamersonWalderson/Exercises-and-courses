#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
/*
URI Online Judge | 1118

Faça um programa que leia as notas referentes às
duas avaliações de um aluno.
Calcule e imprima a média semestral.
Faça com que o algoritmo só aceite notas válidas
(uma nota válida deve pertencer ao intervalo [0,10]).
Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”,
solicitando ao usuário que informe um código (1 ou 2)
indicando se ele deseja ou não executar o algoritmo novamente, 
(aceitar apenas os código 1 ou 2).
Se for informado o código 1 deve ser repetida a execução de todo
o programa para permitir um novo cálculo, caso contrário
o programa deve ser encerrado.
*/


double media(double n1, double n2);

int main() {
    double entrada,
        primeiraNota,
        segundaNota;

    int notasValidas =0,
        X; //condional do switch


//Entrada && Processamento

inicio:
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
    notasValidas = 0; //Limpa para que quando rodar o loop   

//Saida
    cout << fixed;
    cout << setprecision(2);
    cout << "media = " << media(primeiraNota, segundaNota) << "\n";

    menu:
    cout << "novo calculo (1-sim 2-nao)\n";
    cin >> X;
    switch (X) {
        case 1:
            goto inicio;
            break;
        case 2:
            return EXIT_SUCCESS;
            break;
        default:
            goto menu;
    }

    return 0;
}

double media(double n1, double n2) {
    double resultado;
    resultado = (n1+n2) /2.00;
    return resultado;
}