#include <stdlib.h>
#include <stdio.h>
/*
 Leia um número inteiro que representa um código de DDD
 para discagem interurbana. Em seguida,
 informe à qual cidade o DDD pertence, considerando a tabela abaixo:
*/
int main () {
	int ddd;
//Entrada
	scanf ("%d",&ddd);
//Processamento
	switch (ddd) {
		case 61:
		printf ("Brasilia\n");
		break;

		case 71:
		printf ("Salvador\n");
		break;

		case 11:
		printf ("Sao Paulo\n");
		break;

		case 21:
		printf ("Rio de Janeiro\n");
		break;

		case 32:
		printf ("Juiz de Fora\n");
		break;

		case 19:
		printf ("Campinas\n");
		break;

		case 27:
		printf ("Vitoria\n");
		break;

		case 31:
		printf ("Belo Horizonte\n");
		break;

		default:
		printf ("DDD nao cadastrado\n"); //DDD desconhecido
		break;
	}
//Saida

	return 0;
}