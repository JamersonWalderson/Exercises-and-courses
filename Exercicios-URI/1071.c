#include <stdlib.h>
#include <stdio.h>

/*
URI Online Judge | 1071
Leia 2 valores inteiros X e Y.
A seguir,
calcule e mostre a soma dos números impares entre eles.
*/

int main () {
	int 
	X=0,
	Y=0,
	impar=0,
	menor=0,
	maior=0,
	i=0;
//Entrada
	scanf ("%d%d", &X, &Y);
//Processamento
	if(X>Y) { //Condicional responsavel em descobrir o menor valor e guadar em X.
		menor = Y;	
		maior = X;	
		X=menor;
		Y=maior;
	}

	if (X < 0) {
		if ((X%2)!=0) X+=2;	
	}

	i=X;
	for (i; i<Y;i+=2){
		if ((X%2)==0) {
			i++;
		}
		impar += i;
	}
	//Testar com -5 ~ 6 --> -3 -1 1 3 5

//Saida
	printf("%d\n", impar);
	return 0;
}