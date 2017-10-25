 #include <iostream>
 using namespace std;
 class Cerchio
 {
  public:
  double X;
  double Y;
  double Raggio;

  Cerchio( );
  Cerchio(double pX, double pY, double pRaggio);
  double Circonferenza( );
  double Area( );
 };

 Cerchio::Cerchio( )
 {
  X = 0;
  Y = 0;
  Raggio = 1;
 }
 Cerchio::Cerchio(double pX, double pY, double pRaggio)
 {
  X = pX;
  Y = pY;
  Raggio = pRaggio;
 }
 double Cerchio::Circonferenza( )
 {
  const double Pigreco = 3.141593; /*stack*/
  return(2 * Raggio * Pigreco);
 }
 double Cerchio::Area( )
 {
  const double Pigreco = 3.141593;
  return(Raggio * Raggio * Pigreco);
 }
 int main()
 {
  double X1,Y1,X2,Y2,Raggio1,Raggio2;/*stack*/
  cout << " Valore coordinata X: "; cin >> X1;
  cout << " Valore coordinata Y: "; cin >> Y1;
  cout << " Valore raggio: "; cin >> Raggio1;
  //Cerchio C1 = Cerchio(X1, Y1, Raggio1); modo1
  //Cerchio C3(X1, Y1, Raggio1); modo2
  //modo3 segue
  Cerchio *C3;
  C3 = new /*parola chiave*/Cerchio(X1,Y1, Raggio);/*heap(oggetti)*/
  int x(3);
  cout << " Cerchio C1 Circonferenza="<<C1.Circonferenza()<<" Area="<<C1.Area()<<endl;
  cout << " Valore coordinata X: "; cin >> X2;
  cout << " Valore coordinata Y: "; cin >> Y2;
  cout << " Valore raggio: "; cin >> Raggio2;
  Cerchio C2 = Cerchio(X2, Y2, Raggio2 );
  cout << " Cerchio C2 Circonferenza=" << C2.Circonferenza() << " Area=" << C2.Area() << endl;
  return 0;
 }


/*STACK(variabili locali alla procedura, quando finisce  la procedura "muoiono")
spazio
che
deve
rimanere
libero
HEAP (anche se sonolocali ad una funzione restano, per eliminarli bisogna chiamare il distruttore, che libera lo spazio di memoria)
lo heap va ripulito esplicitamente
STATIC DATA
CODE(codice eseguibile)
PROCESS*/
