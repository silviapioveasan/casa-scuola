#include <iostream>
using namespace std;

int main (){
int a[];
int b[];
int dim1,dim2;

cout << "Ecco il primo array: " << endl;

caricamento(a, dim1);

cout << "Ecco il secondo array: " << endl;

caricamento (b,dim2);

if (test (a,b,dim1,dim2)==true)
    cout << "Gli array sono uguali";
else
    cout << "Gli array sono diversi";
}


void Caricamento (int x[],int&dim){
     cout << "Inserisci dimensione array: "<<endl;
     cin >> dim;
for (int i=1; i<dim-1; i++){
    cout << "inserisci il valore della " << i << " posizione: ";
    cin >> x[i];
    }
    }

bool verifica (int a[], int b[], int dim1, int dim2){
bool r=true;
if (dim1==dim2){
        for (int i=1; i<dim1-1; i++){
            if(a[i]!=b[i])
                {
                    r=false;
                    return r;
                }
        }
return r;
}
else {
    r =false;
    return r;
}



