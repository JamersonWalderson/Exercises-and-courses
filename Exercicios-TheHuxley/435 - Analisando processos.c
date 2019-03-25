#include <stdio.h>

/*
* Problema 435
*/
int processosAnalidos();

int main() {
    int x;
    scanf ("%d", &x);
    processosAnalidos(x);

    return 0;
}

int processosAnalidos(int minutosProcesso) {
    int total = (8*60) / minutosProcesso;
    printf ("%d\n", total);
}
