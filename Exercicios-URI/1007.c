#include <stdio.h>
#include <stdlib.h>

/* 
Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D 
segundo a fórmula: DIFERENCA = (A * B - C * D).
*/

int main(int argc, char *argv[]) {
	int A, B, C, D, DIFERENCA;
	
	scanf("%d%d%d%d",&A, &B, &C, &D);
	DIFERENCA = (A * B - C * D);
	
	printf ("DIFERENCA = %d\n", DIFERENCA);
	return 0;
}
