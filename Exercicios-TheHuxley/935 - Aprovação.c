#include <stdio.h>

/*
* Problema 935
* A partir de 3 notas fornecidas de um aluno, informe se ele foi aprovado, ficou de recuperação ou foi reprovado.
* Média de aprovação: >= 7.0;
* Média de recuperação: >= 5.0 e < 7.0;
* Média de reprovação: < 5.0;
*/

double media(double num1, double num2, double num3) {
    double resultado;
    resultado = (num1+num2+num3)/3;
    return resultado;
}

int main() {
    double n1, n2, n3;

//Entrada
    printf ("Informe a primeira nota:");
    scanf ("%lf", &n1);

    printf ("\nInforme a segunda nota:");
    scanf ("%lf", &n2);

    printf ("\nInforme a terceira nota:");
    scanf ("%lf", &n3); 
    printf ("\n");      
    
//Processamento && Saida
    if (media(n1, n2, n3) >= 7.0) printf ("Aprovado com media %.1lf", media(n1, n2, n3));
    if (media(n1, n2, n3) >= 5.0 && media(n1, n2, n3) <7.0) printf ("Recuperacao com media %.15lf", media(n1, n2, n3));
    if (media(n1, n2, n3) < 5.0) printf ("Reprovado com media %.1lf", media(n1, n2, n3));

    return 0;
}