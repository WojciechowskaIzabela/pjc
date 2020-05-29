#include <iostream>
#include "tura.h"
#include <ctime>
#include <cstdlib>
#include <cmath>


using namespace std;

CTura :: CTura ()
{
    // tego nie powinno być w konstruktorze
    powitanie();

    // tego też nie powinno być.
    wczytaj_rozmiar_planszy();

    tablica.resize(rozmiar, std::vector<CZwierze*>(rozmiar, nullptr));

}


CTura::~CTura(){

    for(auto& r : tablica) {
        for (auto& z : r)
            if (z) {
                delete z;
            }
    }
}


void CTura::przeprowadz_ture(){


     if(tura_obecna==1)
         zwierzeta_startowe();

     cout<<endl<<endl<<endl<<" *********************  Przeprowadzam ture ********************* "<<tura_obecna<<endl;


     postarz();
    drukuj_tablice();


    tura_obecna++;

}


void CTura::wczytaj_rozmiar_planszy(){

    cout<<endl<<" Podaj rozmiar tablicy z przedzialu <5,30>" <<endl;
    cin>>rozmiar;
    if(rozmiar<5 || rozmiar>30)
    {
        while(rozmiar<5 || rozmiar>30)
        {
            cout<<endl<<" Podaj wartosc z przedzialu <5,30> ! "<<endl;
            cin>>rozmiar;
        }
    }

}



void CTura::drukuj_tablice(){    

    for(int i=0;i<tablica.size();i++){
        for(int j=0;j<rozmiar;j++){
            if (tablica[i][j] != nullptr) {
                cout << " " ;
                tablica[i][j]->drukuj();
                cout << " ";
            } else {
                cout << " __ ";
            }
        }
        cout<<endl;
    }
}

void CTura::zwierzeta_startowe()
{

    srand (time(NULL));
    int x,y;
    int iloscZwierzat = 8;
    for (int i=0; i<iloscZwierzat; i++) {
        do {
            x= rand()%(rozmiar);
            y= rand()%(rozmiar);
        } while (tablica[x][y] != nullptr);
        int gatunek = rand() % 3;
        char plec = (rand() % 2 ? 'k' : 'm');
        switch (gatunek) {
        case 0 : tablica[x][y]=new CLew(plec, tura_obecna); break;
        case 1 : tablica[x][y]=new CKrokodyl(plec, tura_obecna); break;
        case 2 : tablica[x][y]=new CGazela(plec, tura_obecna); break;
        }
    }
}



void CTura :: powitanie(){

    cout<<endl<<endl<<endl;
      cout<<"****************  Witaj Użytkowniku na Wyspie!!!  ****************"<<endl<<endl;
      cout<<" Szybkie zasady : "<<endl<< " Na wyspie znajdują się rózne gatunki zwierząt, które mogą się PORUSZAĆ, ROZMNAŻAC oraz ATAKOWAC"<<endl<<" Wszystko obarczone jest prawdopodobienstwem spełnienia(poruszanie się zas to losowanie ruchu dol/0/gora,lewo/0/prawo) "<<endl;
       cout<<" Zwierzeta beda oznaczone na tablicy  postaci dwoch liter. "<<endl<<" Pierwsza litera bedzie od gatunku a druga od płci (K/M)"<<endl;
       cout<<"    Twoje umiejetnosci to: "<<endl<<"   1. Możliwość tworzenia zwierzęcia po skończeniu każdej tury"<<endl;
       cout<< "   2. Decydowanie kiedy skończyc symulacje"<<endl;
       cout<<"   3. Rozmiar kwadratowej wyspy"<<endl<<endl<<"Zacznijmy od tego ostatniego!"<<endl;

}


void CTura::dodaj_zwierze(){
    char plec_zw;
    char jakie_zwierze;
    int x,y;

    cout<<"Jakie zwierze chcesz stworzyc?"<<endl<<"K-Krokodyl"<<endl;
    cout<<"G-Gazela"<<endl<<"L-Lew"<<endl;
    cin>>jakie_zwierze;

    cout<<"Podaj plec zwierzecia"<<endl<<"K"<<endl<<"M"<<endl;
    cin>>plec_zw;


    cout<<" Podaj wspolczedne gdzie chcesz dodac zwierze"<<endl;
    cin>>x;
    cin>>y;
    x=x-1;
    y=y-1;

    if (tablica[x][y] != nullptr)
        while ( tablica[x][y] != nullptr){
            cout<<"Podaj  puste pole!";
            cin>>x;
            cin>>y;
            x=x-1;
            y=y-1;
        }

    if (jakie_zwierze=='g' || jakie_zwierze=='G' ){
            tablica[x][y] = new CGazela;
            tablica[x][y]->plec=plec_zw;
            tablica[x][y]->tura_terazniejsza=tura_obecna;
        }


        if(jakie_zwierze=='k' || jakie_zwierze=='K' ){
            tablica[x][y] = new CKrokodyl;
            tablica[x][y]->plec=plec_zw;
            tablica[x][y]->tura_terazniejsza=tura_obecna;
        }



        if(jakie_zwierze=='l' || jakie_zwierze=='L' ){
            tablica[x][y] = new CLew;
            tablica[x][y]->plec=plec_zw;
            tablica[x][y]->tura_terazniejsza=tura_obecna;
        }

}

void CTura::narodziny(char z){

}

void CTura::postarz(){

    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++){
            if(tablica[i][j])
            cout<<tablica[i][j]->sprawdz_wiek(tablica[i][j])<<endl;

           if (dynamic_cast<CLew*>(tablica[i][j])){
               if(tablica[i][j]->sprawdz_wiek(tablica[i][j])==5){
                tablica[i][j]->~CZwierze();
                tablica[i][j]=nullptr;
               }
               else
                   tablica[i][j]->wiek_plus_plus(tablica[i][j]);
            }

         else if ( dynamic_cast<CGazela*>(tablica[i][j])){

               if( tablica[i][j]->sprawdz_wiek(tablica[i][j])==7){
                tablica[i][j]->~CZwierze();
                tablica[i][j]=nullptr;
               }
               else
                   tablica[i][j]->wiek_plus_plus(tablica[i][j]);
            }


           else if ( dynamic_cast<CKrokodyl*>(tablica[i][j])){

                if(tablica[i][j]->sprawdz_wiek(tablica[i][j])==4){
                tablica[i][j]->~CZwierze();
                tablica[i][j]=nullptr;
                }
                else
                    tablica[i][j]->wiek_plus_plus(tablica[i][j]);
            }








}
}
