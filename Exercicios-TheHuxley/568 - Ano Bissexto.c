#include <stdio.h>

/*
* Problema 568
*/
void bissexto(int ano) {
    char anoCentenario;

/* Condicional para verificar se e ano centenario */
    if ((ano % 100 == 0)) {
        anoCentenario = 'V';
    } else {
        anoCentenario = 'F';
    }
/* ---------------------------------------------- */

    if (anoCentenario == 'V') {
       (ano % 400) == 0 ? printf ("BISSEXTO\n") : printf ("NAOBISSEXTO\n");

    }
    if (anoCentenario == 'F') {
        ((ano % 4) == 0) ? printf ("BISSEXTO\n") : printf ("NAOBISSEXTO\n");
    }
}


int main () {
    int x;
    scanf ("%d", &x);
    bissexto (x);

    return 0;
}


/*
* Se o ano for centanario divisivel por 400 ele e bissexto (ex: 3000, 700, 600)
*   - fazer mod 100 se o resultado for 0, o ano é centenario
* Se o ano nao for centenario e divisivel por 4 ele e bissexto (ex: 70, 72, 20, 928, 3001)
*/