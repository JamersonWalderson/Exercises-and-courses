#include <iostream>
using namespace std;

/* Prototipos das funcoes */
float media(float a, float b, float c);

int main() {
    float num1, num2, num3;

//Entrada
    cin >> num1 >> num2 >> num3;

    if (media (num1, num2, num3) >= 7) cout << "aprovado\n";
    if (media (num1, num2, num3) < 3) cout << "reprovado\n";
    if (media (num1, num2, num3) >= 3 && media (num1, num2, num3) < 7) cout << "prova final\n";

    return 0;

}

/* Funcoes */
float media(float a, float b, float c) {
    float resultado =0;
    return resultado = (a + b + c)/3;

}