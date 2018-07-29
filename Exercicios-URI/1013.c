#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia três valores e apresente o maior dos três valores
lidos seguido da mensagem “eh o maior”. Utilize a fórmula: 
*/

int main(int argc, char *argv[]) {
	//entrada
		int a, b, c, MaiorAB;
		scanf ("%d%d%d",&a, &b, &c);
	//processamento
		if (a > b) {
			if (a > c) {
				MaiorAB = a;
			} else {
				MaiorAB = c;
			}
		} else if (b > c) {
			MaiorAB = b;
		} else {
			MaiorAB = c;
		}
	
	//saida
	printf ("%d eh o maior\n", MaiorAB);
	return 0;
}
