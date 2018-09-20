#include <iostream>
#include <iomanip>
#define MULTA 12.89

using namespace std;

/* Funcoes prototipos */

int main() {
    int entrada =0,
        casasMultadas =0,
        numeroCasasMultadas =0;      
    float totalMultas = 0.0;

//Entrada
    while (entrada != 999) {
        cin >> entrada;
        if (entrada > 2 && entrada != 999) {
            entrada = entrada -2;
            casasMultadas = casasMultadas + entrada;
            numeroCasasMultadas++;

        }

    }
//Proessamento && Saida    
    totalMultas = casasMultadas * MULTA;
    cout << fixed << setprecision(2) << totalMultas << endl;
    cout << numeroCasasMultadas << endl;


    return 0;
}

/* Funcoes */