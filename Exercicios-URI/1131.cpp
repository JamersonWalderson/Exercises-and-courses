#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
URI Online Judge | 1131
*/

int main () {
    int entradaInter =0,
        entradaGremio =0,    
        grenais =0,
        inter =0,
        gremio =0,
        empates =0,
        novoGrenal;

//Entrada && Processamento
    do {   
        grenais++; //Quantidade de jogos
        cin >> entradaInter >> entradaGremio;
        /* Condicionais */
        if (entradaInter == entradaGremio) empates++;
        if (entradaInter > entradaGremio) inter++;
        if (entradaGremio > entradaInter) gremio++;
        /*--------------*/
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> novoGrenal;
    } while (novoGrenal == 1);

 //Saida 
    /* Tabela */
    cout << grenais << " grenais\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << empates << "\n";
    /* Houve vencedor? */
    if (inter == gremio) cout << "Nao houve vencedor\n";
    else if (inter > gremio && inter != gremio) cout << "Inter venceu mais\n";    
    else cout << "Gremio venceu mais\n";        
          


    return 0;
}

