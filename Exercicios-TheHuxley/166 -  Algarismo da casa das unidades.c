#include <stdio.h>

int main() {
    int entrada =0,
        resultado =0;
    
    scanf ("%d", &entrada);
    resultado = entrada%10;
    
    printf("%d", resultado);

    return 0;
}