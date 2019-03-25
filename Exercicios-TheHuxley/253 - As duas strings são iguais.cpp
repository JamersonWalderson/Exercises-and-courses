#include <iostream>
#include <string>

using namespace std;

/* Prototipos de funcoes */
bool comparar (string a, string b);

int main() {
    string texto1, texto2;

//Entrada
    cin >> texto1 >> texto2;
    
 //Processamento & Saida   
    if (comparar (texto1, texto2) == 1) cout << "IGUAIS\n";
    if (comparar (texto1, texto2) != 1) cout << "DIFERENTES\n";
    return 0;

}

/* Funcoes */
bool comparar (string a, string b) {
    if (a == b) return true;
    if  (a != b) return false;

}