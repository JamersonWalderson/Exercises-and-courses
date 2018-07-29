#include <stdio.h>
#include <stdlib.h>

/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) 
no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
 A seguir mostre o valor lido e a relação de notas necessárias.
*/

int main(int argc, char *argv[]) {
	int 
	N, 
	aux, 
	r100 = 0, 
	r50 = 0, 
	r20 = 0, 
	r10 = 0, 
	r5 = 0, 
	r2 = 0, 
	r1 = 0;
	
	//Entrada
	scanf ("%d",&N);
	if (N > 0 && N < 1000000) {
		
	
	
	//Processamento
	r100 = N /100;
	aux = N %100;	

	r50 = aux /50;
	aux = aux %50;	
	
	r20 = aux /20;
	aux = aux %20;
	
	r10 = aux /10;
	aux = aux %10;			
	
	r5 = aux /5;
	aux = aux %5;
	
	r2 = aux /2;
	aux = aux %2;
		
	
	r1 = aux /1;
	aux = aux %1;
		
	/*
	r50 = r100 /50;
	r20 = r50 /20;
	r10 = r20 /10;
	r5 = r10 /5;
	r1 = r5 /1;
	*/
	
	//Saida
	printf("%d nota(s) de R$ 100,00\n",r100);
	printf("%d nota(s) de R$ 50,00\n",r50);
	printf("%d nota(s) de R$ 20,00\n",r20);
	printf("%d nota(s) de R$ 10,00\n",r10);
	printf("%d nota(s) de R$ 5,00\n",r5);
	printf("%d nota(s) de R$ 2,00\n",r2);
	printf("%d nota(s) de R$ 1,00\n",r1);
	}

	return 0;
}
