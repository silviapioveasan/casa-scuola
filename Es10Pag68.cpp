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

    switch (MAX){
        case 1
    }
    if (primoValore>secondoValore){
        MAX=primoValore;
        MIN=secondoValore;
            }else{
            if (primoValore>terzoValore){
                    MAX=primoValore;
                    MIN=secondoValore
                    }else{
                    MAX=terzoValore;

                    }
    }else{
            MAX=secondoValore;
            if(secondoValore>terzoValore){
                MAX=secondoValore;
            }else{
                MAX=terzoValore;
            }
    }
    cout << "IL VALORE MASSIMO E'  "<<MAX<< endl;
    return 0;
}
