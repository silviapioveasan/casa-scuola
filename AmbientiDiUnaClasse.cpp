#include <iostream>
using namespace std;

class Rettangolo{
private:
    unsigned int base;
    unsigned int altezza;
private:
    unsigned int area();
public:
    unsigned int perimetro();
    Rettangolo(unsigned int base, unsigned int altezza);
    Rettangolo();
};


int main(){
    // le classi sono tipi
    // gli oggetti sono variabili di quei tipi
    unsigned int base = 4;
    unsigned int altezza = 4;
    Rettangolo rettangolo(4, 4);
    rettangolo.perimetro();
    /*
    qui siamo in ambiente esterno alla classe
    qui noon si puo usare rettangolo.base perché esso
     e un attributo privato
    */
    /*
    cosa succede se dichiaro qui le variabili con lo stesso nome ...?
    */


    return 0;
}

Rettangolo::Rettangolo(){}

Rettangolo::Rettangolo(unsigned int b, unsigned int a){
    base = b;
    altezza = a;
}

unsigned int Rettangolo::area(){
    unsigned int a = base*altezza;
    cout << "Valore area: " << a << endl;
}

unsigned int Rettangolo::perimetro(){ //scope resolution
    unsigned int p = 2*(base+altezza);
    cout << "Valore perimetro: " << p << endl;
    area();

}




