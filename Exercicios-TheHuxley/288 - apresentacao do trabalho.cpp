#include <iostream>
#include <cstdlib>
using namespace std;
/*
Problema 288
*/

int main (void) {
	int ig =0, /* interface grafica */
		ia =0, /* inteligencia artificial */
		encapsulamento =0,
		identacao =0,
		struc =0;
	
//Entrada
	cin >> ig >> ia >> encapsulamento >> identacao >> struc;
//Processamento & Saida
	if (encapsulamento ==1 && identacao ==1 && struc==1) {
		if (ig ==1 || ia ==1) {
			cout << "AVALIADO\n";
			
		}
		else {
			cout << "0\n";
			
		}
			
	} else {
		cout << "0\n";
		
	}	
	return 0;
}

