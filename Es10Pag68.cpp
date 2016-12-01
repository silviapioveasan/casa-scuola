#include <iostream>

using namespace std;


int main (){

    int primoValore,secondoValore,terzoValore;
    int MAX,MIN,DIFF;

    cout << "ALGORITMO CHE DATI TRE NUMERI CALCOLA:" <<endl;
    cout << "- IL MAGGIORE" <<endl;
    cout << "- IL MINORE" <<endl;
    cout << "- LA DIFFERENZA FRA IL MAGGIORE ED IL MINORE" <<endl,

    cout << "Inserisci il primo valore " <<endl;
    cin >> primoValore;
    cout << "Inserisci secondo valore" <<endl;
    cin >> secondoValore;
    cout << "Inserisci il terzo valore" <<endl;
    cin >> terzoValore;

    MAX=max(primoValore && secondoValore && terzoValore);
    MIN=min (primoValore && secondoValore && terzoValore);
    DIFF=MAX-MIN

    cout << "IL VALORE MASSIMO E'  "<<MAX<< endl;
    cout << "IL VALORE MINIMO E' "<<MIN<< endl;
    cout << "LA DIFFERENZA FRA IL VALORE MAGGIORE E QUELLO MINORE E' "<<DIFF<<endl;
    return 0;
}

switch (MAX){
        case primoValore>secondoValore>terzoValore:
        case terzoValore>secondoValore>primoValore:
        case primoValore>terzoValore>secondoValore:
        case terzoValore>primoValore>secondoValore:
        case secondoValore>terzoValore>primoValore:
        case secondoValore>primoValore>terzoValore:
    }
