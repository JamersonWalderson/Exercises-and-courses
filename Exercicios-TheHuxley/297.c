#include <stdio.h>
/*
* Problema 297
*/
int bissexto(int ano) {
    char anoCentenario;

/* Condicional para verificar se e ano centenario */
    if ((ano % 100 == 0)) {
        anoCentenario = 'V';
    } else {
        anoCentenario = 'F';
    }
/* ---------------------------------------------- */

    if (anoCentenario == 'V') {
        if ((ano % 400) == 0) return ano;

    }
    if (anoCentenario == 'F') {
        if ((ano % 4) == 0) return ano;
    }
}


int main() {
    int x =0, // ano inicial
        y =0, // ano final
        i =0;

    scanf ("%d%d", &x, &y);
    for (i=x; i<y; i++) {
        if (bissexto(x) > 5) printf ("%d\n", bissexto(i));
        
    }

    return 0;
}