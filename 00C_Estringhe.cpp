#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    char nome [6];
    nome [0] ='M';
    nome [1] ='a';
    nome [2] ='r';
    nome [3] ='c';
    nome [4] ='o';
    nome [5] ='\0';
    cout<< nome <<endl;
    char cognome[] = {'V','O','L','P','I','/0'}; // anche se non scrivo la dimensione dell'array funziona corretamente
    cout<< cognome <<endl;
    char indirizzo[]= "via Frizzy 38,Marghera";
    string telefono ="34623764237";
    return 0;



}
