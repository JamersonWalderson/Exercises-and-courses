#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int x =0,
        entrada =0,
        tam =0, //tamanho do vetor
        i =0,
        resultado;
//entrada
    do {
        cin >> entrada;
        for (i=1; i<=entrada; i++) {
            cout << i;
            if (i!=entrada) cout <<" ";
        }
        if (entrada!=0) cout << endl;

    } while(entrada!=0);

    return 0;
}