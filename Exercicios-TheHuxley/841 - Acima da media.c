#include <stdio.h>
#include <stdlib.h>

/* Dados três números em ponto flutuante queremos saber quantos deles estão acima da média aritmética. */
float media(float a, float b, float c) {
    float media;
    int acimaMedia =0;

    media = (a+b+c)/3;
    if (a > media) acimaMedia++;
    if (b > media) acimaMedia++;
    if (c > media) acimaMedia++;
    printf ("%d", acimaMedia);

}

int main() {
    float num1 = 0.0, num2 = 0.0, num3 = 0.0;
    scanf ("%f%f%f", &num1, &num2, &num3);
    media (num1, num2, num3);
    return 0;
}



