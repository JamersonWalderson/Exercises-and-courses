#include <stdio.h>
#include <stdlib.h>

/* 
Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir,
calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

int main(int argc, char *argv[]) {
	float A, B, C, media;
	
	scanf ("%f%f%f",&A, &B, &C);
	
	A = A *2;
	B = B *3;
	C = C *5;
	media = (A+B+C)/10;
	
	printf ("MEDIA = %.1f\n", media);
	return 0;
}
