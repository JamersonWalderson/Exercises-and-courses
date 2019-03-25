#include <iostream>
#include <cstdio>
using namespace std;
/* Problema 39
*
*
* Prototipos */
void media(double numeros[]);
int main () {
    double n[3];
//Entrada
    for (int i; i<3; i++) {
        cin >> n[i];

    }
 //Processamento && Saida   
    void media(double n[]);


    system("pause");
    return 0;

}
/* Funcoes */
void media(double numeros[3]) {
    for (int i=0; i<3; i++) {
        cout << numeros[i] << "\n";

    }
}