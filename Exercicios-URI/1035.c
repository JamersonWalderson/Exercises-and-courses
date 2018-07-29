#include <stdio.h>
#include <stdlib.h>

/*
Leia 4 valores inteiros A, B, C e D. A seguir, 
se B for maior do que C e se D for maior do que A,
e a soma de C com D for maior que a soma de A e B e se C e D, 
ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos",
senão escrever "Valores nao aceitos".
*/

int main(int argc, char *argv[]) {
	int a, b, c, d;	
//entrada
	scanf ("%d%d%d%d",&a, &b, &c, &d);
//processamento
	if ((b>c) && (d>a) && (c+d) > (a+b) && (c&&d >= 1) && (a%2==0)) {	
//saida	
		printf ("Valores aceitos\n");	
		} else {
		printf ("Valores nao aceitos\n");
	}
	return 0;
}
