#include <stdio.h>
/*
* Problema 297
*/
int bissexto(int ano) {
    char anoCentenario;

/* Condicional para verificar se e ano centenario */
    if ((ano % 100 == 0)) {
        anoCentenario = 'V';
<<<<<<< HEAD
        
    } else {
        anoCentenario = 'F';
        
    }
/* ---------------------------------------------- */
=======
    } else {
        anoCentenario = 'F';
    }
/* ---------------------------------------------- */

>>>>>>> e23e5e2935863a7bda7d32ba2f6f6ab3c616de98
    if (anoCentenario == 'V') {
        if ((ano % 400) == 0) return ano;

    }
    if (anoCentenario == 'F') {
        if ((ano % 4) == 0) return ano;
<<<<<<< HEAD
        
    }
    
}
=======
    }
}


>>>>>>> e23e5e2935863a7bda7d32ba2f6f6ab3c616de98
int main() {
    int x =0, // ano inicial
        y =0, // ano final
        i =0;

    scanf ("%d%d", &x, &y);
<<<<<<< HEAD
    if ((x || y) ==0) printf ("-1");  
    for (i=x; i<y; i++) {
    	bissexto(i);
    	if (bissexto(i) > 3) {
    		printf ("%d\n", bissexto(i));
    		
		}
    	
	}
    return 0;
}
=======
    for (i=x; i<y; i++) {
        if (bissexto(x) > 5) printf ("%d\n", bissexto(i));
        
    }

    return 0;
}
>>>>>>> e23e5e2935863a7bda7d32ba2f6f6ab3c616de98
