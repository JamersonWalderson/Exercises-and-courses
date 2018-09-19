#include <iostream>
using namespace std;

/* Prototipo das funcoes */
float reajuste (float salario);

int main() {
    float salarioColaborador;

//Entrada, processamento e saida
    cin >> salarioColaborador;
    cout << reajuste(salarioColaborador) << endl;

    return 0;
}

/* Funcoes */
float reajuste (float salario) {
    float reajuste;

    if (salario < 280.00) return reajuste = salario *1.20;
    if (salario > 280.00 && salario < 700.00) return reajuste = salario * 1.15;
    if (salario > 700.00 && salario < 1500.00) return reajuste = salario * 1.10;
    if (salario >= 1500.00) return reajuste = salario *1.05;
}