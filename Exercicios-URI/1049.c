#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
Neste problema,
você deverá ler 3 palavras que definem o tipo de animal
possível segundo o esquema abaixo, da esquerda para a direita.
Em seguida conclua qual dos animais seguintes foi escolhido,
através das três palavras fornecidas. 
*/
int main () {
	char 
	primeiraEntrada[20] = "A frase",
	segundaEntrada[20] = "A frase",
	terceiraEntrada[20] = "A frase";

//Entrada
	scanf ("%s", primeiraEntrada);
	scanf ("%s", segundaEntrada);
	scanf ("%s", terceiraEntrada);

	/*
	gets (primeiraEntrada);
	gets (segundaEntrada);
	gets (terceiraEntrada);
	*/

	/*
	fgets (primeiraEntrada, 20, stdin); 
	fgets (segundaEntrada, 20, stdin);
	fgets (terceiraEntrada, 20, stdin);
	*/


//Processamento
	/*Classe dos vertebrados*/
	if(strcmp(primeiraEntrada,"vertebrado")==0 && strcmp(segundaEntrada,"ave")==0 && strcmp(terceiraEntrada,"carnivoro")==0) printf ("aguia\n");
	if(strcmp(primeiraEntrada,"vertebrado")==0 && strcmp(segundaEntrada,"ave")==0 && strcmp(terceiraEntrada,"onivoro")==0) printf ("pomba\n");	
	if(strcmp(primeiraEntrada,"vertebrado")==0 && strcmp(segundaEntrada,"mamifero")==0 && strcmp(terceiraEntrada,"onivoro")==0) printf ("homem\n");
	if(strcmp(primeiraEntrada,"vertebrado")==0 && strcmp(segundaEntrada,"mamifero")==0 && strcmp(terceiraEntrada,"herbivoro")==0) printf ("vaca\n");

	/*Classe dos invertebrados*/
	if(strcmp(primeiraEntrada,"invertebrado")==0 && strcmp(segundaEntrada,"inseto")==0 && strcmp(terceiraEntrada,"hematofago")==0) printf ("pulga\n");
	if(strcmp(primeiraEntrada,"invertebrado")==0 && strcmp(segundaEntrada,"inseto")==0 && strcmp(terceiraEntrada,"herbivoro")==0) printf ("lagarta\n");
	if(strcmp(primeiraEntrada,"invertebrado")==0 && strcmp(segundaEntrada,"anelideo")==0 && strcmp(terceiraEntrada,"hematofago")==0) printf ("sanguessuga\n");
	if(strcmp(primeiraEntrada,"invertebrado")==0 && strcmp(segundaEntrada,"anelideo")==0 && strcmp(terceiraEntrada,"onivoro")==0) printf ("minhoca\n");

//Saida	

	return 0;
}