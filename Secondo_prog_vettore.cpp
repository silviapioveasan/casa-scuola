#include <iostream>
#include <stdlib.h>

using namespace std;
int ottienidimensione(void);
void stampa(int vet[], int dim);
void inseriscivalori(int vet[], int dim);

int main(){
    // dichiarazione di un vettore di 10 interi
    int numelementi;  // numero di elementio dell'array v
    int v[numelementi                                                                                                                      ];
    numelementi=ottienidimensione();
    inseriscivalori(v, numelementi);

    cout << "Ecco l'indirizzo di partenza dell' array : " << v << endl;
    cout << "Ecco l'indirizzo della seconda cella dell' array : " << v+1 << endl;
    stampa(v, numelementi);
    system("PAUSE");
    return 0;
}

int ottienidimensione(){
    int dim;
    do {
        cout << "Inserisci il numero di elementi: ";
        cin >> dim;
    } while (dim <= 0 || dim > 10);
    return dim;
}

void stampa(int vet[], int dim){
    for (int i=0; i <dim; i++) {
        cout << "Ecco il " << i+1 << " elemento: " << vet[i] << endl;
    }
}

void inseriscivalori(int vet[], int dim){

  for (int i=0; i < dim; i++) {
        cout << "Inserisci il " << i+1 << " elemento: ";
        cin >> vet[i];
    }
}


