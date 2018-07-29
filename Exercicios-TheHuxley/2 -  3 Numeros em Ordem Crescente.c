#include <stdio.h>

/*
* Problema 2
*
* Faça um programa que leia 3 números inteiros e os imprima em ordem crescente.
*/
int ordemCrescente(int num1, int num2, int num3) {
    int aux =0;
    if (num1 > num2){
      aux = num2;
      num2 = num1;
      num1 = aux;
    }

    if (num1 > num3 ){
     aux = num3;
     num3 = num1;
     num1 = aux;
    }

    if (num2 > num3){
        aux = num3;
        num3 = num2;
        num2 = aux;
    }
    return printf ("%d\n%d\n%d", num1, num2, num3);

}

int main() {
    int pri =0, seg =0, ter =0;
    scanf ("%d%d%d", &pri, &seg, &ter);
    
//Processamento && Saida    
    ordemCrescente(pri, seg, ter);
    return 0;
}