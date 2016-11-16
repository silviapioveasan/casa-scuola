	#include <iostream>
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>

	using namespace std;


	/* PROTOTIPI DELLE FUNZIONI */

	void inizializza (void);
	void messaggioFinale (void);
	void disegnaConfigurazione(void);
	void interazioneUtente (void);
	void eseguiAzione (void);
    void muoviMissionario (void);
    void muoviCannibale

	/* VARIABILI GLOBALI E TIPI DI DATO */

	unsigned char missionari_sx, missionari_dx;
	// numero preti presenti su ciascuna sponda
	// assumono valori tra 0 e 3

	unsigned char cannibali_sx, cannibali_dx;
	// numero cannibali presenti su ciascuna sponda
	// assumono valori tra 0 e 3

	unsigned char lato_barca;
	// assume due valori : "d" e "s"

	unsigned char MissionariBarca, CannibaliBarca;
	// assume due valori : "d" e "s"

	bool gioco_terminato;
	// assume due valori : true false

	bool vittoria;
	//true solo se l'utente ha vinto il gioco

	char elemento;
	/* m --> per missionario
	   c --> per

	char partenza;

	char arrivo;

	//###################################

int main()
{

	inizializza ();

	while(!gioco_terminato){
		disegnaConfigurazione();
		interazioneUtente();
		eseguiAzione();
	}

	messaggioFinale ();

	system("PAUSE");
	return 0;

}

void controllaVittoria(void){

	if ((missionari_sx < cannibali_sx && missionari_sx > 0)||
          (missionari_dx < cannibali_dx && missionari_dx > 0) )
         sconfitta = true;
	if (missionari_sx == 3 && cannibali_sx == 3)
         vittoria = true;
    if (vittoria || sconfitta)
         gioco_terminato = true;
}

void inizializza (void)
{
	gioco_terminato=false;

	// definisco situazione iniziale

	cannibali_dx = 3;
	cannibali_sx = 0;
	missionari_dx = 3;
	missionari_sx = 0;
	lato_barca = 'd';
	CannibaliBarca = 0;
	MissionariBarca = 0;
	vittoria = false;
	sconfitta = false;
}

void messaggioFinale(void){
    system("CLS");
    if (gioco_terminato && sconfitta)
        cout << "Hai perso!" << endl;
    if (gioco_terminato && vittoria)
        cout << "Hai vinto!" << endl;
}

void disegnaConfigurazione (void)
{
cout<<"                                                                     M M M C C C"<<endl;
char posto_sx='_', posto_dx='_';

	if (CannibaliBarca == 0 && MissionariBarca == 0){
	posto_sx == '_' && posto_dx == '_'
	}else{
	if (CannibaliBarca == 1 && MissionariBarca == 1)
	posto_sx == 'M' && posto_dx == 'C'
	}else{
	if (CannibaliBarca == 1 && MissionariBarca == 0){
	posto_sx == '_' && posto_dx == 'C'
	}else{
	if (CannibaliBarca == 0 && MIssionariBarca == 1){
	posto_sx == 'M' && posto_dx == '_'
	}else{
	cout << "puoi mettere nella barca solo due personaggi";
	}
	}
	};



    if (lato_barca == 'd')
    {
cout<<"                                                                     M M M C C C"<<endl;
cout<<"------------|________________________("<<posto_sx<<"|"<<posto_dx<<")|------------";

    }else{
cout<<"                                                                     M M M C C C"<<endl;
cout<< "------------|("<<posto_sx<<"|"<<posto_dx<<")________________________|------------"


 /*
     qui inserire il codice che scrive le lettere 'm' e 'c' sopra la sponda sinistra
     per segnalare la presenza di missionari e cannibali su tale sponda, nel numero corretto
     come indicato dai valori delle variabili globali
     Hint: usare il ciclo while per stampare le lettere 'm' e 'c'
     */
    int i = 0;
    while (i <= 5){
        if (i <= 2 && i < missionari_sx) cout << "m";
        else if (i > 2 && i-3 < cannibali_sx) cout << "c";
        else cout << " ";
        i++;
    }
    cout << "                                             ";
    i = 0;
    while (i <= 5){
        if (i <= 2 && i < missionari_dx) cout << "m";
        else if (i > 2 && i-3 < cannibali_dx) cout << "c";
        else cout << " ";
        i++;
    }
    /*
     qui inserire il codice che scrive le lettere 'm' e 'c' sopra la sponda destra
     per segnalare la presenza di missionari e cannibali su tale sponda, nel numero corretto
     come indicato dai valori delle variabili globali
     Hint: usare il ciclo for per stampare le lettere 'm' e 'c'
     */

}


	char scelta1 ;
	char scelta2 ;
	char scelta3 ;
	bool controllo1= false;
	bool controllo2= false;
	bool controllo3= false;
void interazioneUtente (void)
{

	cout<< "------------------------GIOCO CANNIBALI E MISSIONARI------------------------";


do
{
	cout << "che personaggio vuoi muovere ?" << endl;
	cout << "premi b se vuoi utilizzare la barca, c se vuoi utilizzare il cannibale, m se vuoi utilizzare il missionario" << endl;
	cin >> scelta1;

	controllo1 = (scelta1 != 'b' && scelta1 != 'c' && scelta1 != 'm');

if (controllo1 == true)
{
	cout << "devi premere b, c oppure m" << endl;
}while (controllo1 == true);

}

do
{
	cout << "che azione vuoi fargli compiere?" << endl;
	cout << "prem'g se vuoi farlo smontare dalla barca, s se vuoi farlo montare sulla barca, n se vuoi far muovere la barca";
	cin >> scelta2;

	controllo2 = (scelta2 !='g'&& scelta2 !='s'&& scelta2 !='n');

if (controllo2 == true)
{
	cout << "devi premere g,s oppure n";
}
}while (controllo2 = true);

do
{

	cout << "come vuoi farlo muovere?" << endl;
	cout << "premi a se vuoi farlo muovere per acqua, r se vuoi farlo muovere dalla sponda destra, l se vuoi farlo muovere dalla sponda sinistra"<< endl;
	cin >> scelta3;

	controllo3 = (scelta3 != 'a' && seclta3 != 'r' && scelta3 != 'l');

if (controllo3 == true);
{
	cout << "devi premere a,r oppure l";
}
}while (controllo3 == true);

};

void eseguiAzione(){
    // Qui inserire codice che applica la mossa alla configurazione corrente
    char elemento;
    char partenza;
    char arrivo;

    switch (){
        case 'm': muoviMissionario()
        break;
        case 'c'; muoviCannibale();
        break;
        case 'b'; muoviBarca();

    }}

void muoviMissionario (char partenza, char arrivo){

}

void muoviCannibale (char partenza, char arrivo){

}



