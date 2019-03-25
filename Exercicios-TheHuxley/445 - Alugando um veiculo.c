#include <iostream>
using namespace std;

/*
* Problema 445
*/
int main(int argc, char** argv) {
	int dias, rodados, vrodados, km, limiterodado;
	float total;
	cin >> dias >> rodados;
	limiterodado = dias * 100;
	dias = dias * 90;//valor da diaria;		
	if (rodados>limiterodado) {
		vrodados = (limiterodado-rodados)*12;
	}
	if (vrodados<0) {
		vrodados = vrodados *-1;
	}	
	total = vrodados + dias;
	cout << fixed;
	cout.precision(2);
	cout << total;		
	return 0;
}