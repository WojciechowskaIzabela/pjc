#include <iostream>
#include "tura.h"
#include <ctime>
#include <cstdlib>
#include <cmath>


using namespace std;



CTura::~CTura(){

    for(auto& r : tablica) {
        for (auto& z : r)
            if (z) {
                delete z;
            }
    }
}


void CTura::przeprowadz_ture(){


     if(tura_obecna==1){
         wczytaj_rozmiar_planszy();

         tablica.resize(rozmiar, std::vector<CZwierze*>(rozmiar, nullptr));
         zwierzeta_startowe();
         drukuj_tablice();
     }


     cout<<endl<<endl<<endl<<" *********************  Przeprowadzam ture  "<<tura_obecna<<" *********************"<<endl;
    porusz();
    postarz();
    //drukuj_tablice();
    for(int i=0;i<tablica.size();i++){
        for(int j=0;j<rozmiar;j++){
            if(tablica[i][j]){
                interakcje(i,j);
            }
        }
    }

    drukuj_tablice();

    tura_obecna++;

}


void CTura::wczytaj_rozmiar_planszy(){

    cout<<endl<<" Podaj rozmiar tablicy z przedzialu <8,30>" <<endl;
    cin>>rozmiar;
    if(rozmiar<8 || rozmiar>30)
    {
        while(rozmiar<8 || rozmiar>30)
        {
            cout<<endl<<" Podaj wartosc z przedzialu <8,30> ! "<<endl;
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
    int iloscZwierzat = 16;
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
        tablica[x][y] = new CGazela(plec_zw, tura_obecna);
        }


        if(jakie_zwierze=='k' || jakie_zwierze=='K' ){
            tablica[x][y] = new CKrokodyl(plec_zw,tura_obecna);
        }



        if(jakie_zwierze=='l' || jakie_zwierze=='L' ){
            tablica[x][y] = new CLew(plec_zw, tura_obecna);
        }

}

void CTura::narodziny(char z){

    char plec_zw = (rand() % 2 ? 'k' : 'm');
    int x,y;
    do {
        x= rand()%(rozmiar);
        y= rand()%(rozmiar);
    } while (tablica[x][y] != nullptr);

    if (z=='g'){
        tablica[x][y] = new CGazela(plec_zw, tura_obecna);
        }


    if(z=='k'){
            tablica[x][y] = new CKrokodyl(plec_zw,tura_obecna);
        }



    if(z=='l' ){
            tablica[x][y] = new CLew(plec_zw, tura_obecna);
        }
}

void CTura::postarz(){

    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++){
            if(tablica[i][j]){


           if (dynamic_cast<CLew*>(tablica[i][j])){
               if(tablica[i][j]->sprawdz_wiek()==5){
                tablica[i][j]->~CZwierze();
                tablica[i][j]=nullptr;
               }
               else{
                   tablica[i][j]->wiek_plus_plus();

               }
            }

              else if ( dynamic_cast<CGazela*>(tablica[i][j])){

               if( tablica[i][j]->sprawdz_wiek()==7){
                tablica[i][j]->~CZwierze();
                tablica[i][j]=nullptr;
               }
               else{
                   tablica[i][j]->wiek_plus_plus();

               }
            }


              else if ( dynamic_cast<CKrokodyl*>(tablica[i][j])){

                if(tablica[i][j]->sprawdz_wiek()==4){
                tablica[i][j]->~CZwierze();
                tablica[i][j]=nullptr;
                }

                else{
                      tablica[i][j]->wiek_plus_plus();
                }

            }
          // interakcje(i,j);
            }
        }
}


void CTura::porusz(){

    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++){
            if(tablica[i][j]){

            if(tablica[i][j]->sprawdz_ture()<=tura_obecna){

                tablica[i][j]->tura_plus_plus();

                 int x,y;
                 x=-1+rand()%3;
                 if((i+x)<0 || (i+x)>(rozmiar-1))
                     while((i+x)<0 || (i+x)>(rozmiar-1))
                        x=-1+rand()%3;
                 y=-1+rand()%3;
                 if((j+y)<0 || (j+y)>(rozmiar-1))
                     while((j+y)<0 || (j+y)>(rozmiar-1))
                        y=-1+rand()%3;

                 if(tablica[i+x][j+y] == nullptr){
                     tablica[i+x][j+y]=tablica[i][j];
                     tablica[i][j]=nullptr;

                 }

                 // interakcje(i,j);
            }



            }

        }
}


void CTura::interakcje( int i, int j){


        for(int petla_do_jednej_interakcji=0 ;petla_do_jednej_interakcji<1; petla_do_jednej_interakcji++){

            if(tablica[i][j]){
            if((i+1)<rozmiar   &&   tablica[i+1][j]!=nullptr){
                if(tablica[i][j]->daj_gatunek() == tablica [i+1][j]->daj_gatunek()){
                    if(tablica[i][j]->sprawdz_plec() != tablica [i+1][j]->sprawdz_plec()){

                             char gat=tablica[i][j]->daj_gatunek();
                             narodziny(gat);
                             cout<<"Narodziny "<<gat<<endl;

                    }
                }
                else if (tablica[i][j]->daj_gatunek()=='l'){
                    tablica[i+1][j]->~CZwierze();
                     tablica[i+1][j]=nullptr;
                    cout<<"Lew zjadl"<<endl;
                    //break;
                }
                else if (tablica[i][j]->daj_gatunek()=='k'){
                    tablica[i+1][j]->~CZwierze();
                    tablica[i+1][j]=nullptr;
                    cout<<"Krokodyl zjadl"<<endl;
                 //   break;
                }
            }

           if((j+1)<rozmiar   &&   tablica[i][j+1]!=nullptr){
                if(tablica[i][j]->daj_gatunek() == tablica [i][j+1]->daj_gatunek()){
                    if(tablica[i][j]->sprawdz_plec() != tablica [i][j+1]->sprawdz_plec()){

                             char gat=tablica[i][j]->daj_gatunek();
                             narodziny(gat);
                              cout<<"Narodziny "<<gat<<endl;
                           //   break;

                    }
                }
                else if (tablica[i][j]->daj_gatunek()=='l'){
                    tablica[i][j+1]->~CZwierze();
                    tablica[i][j+1]=nullptr;
                    cout<<"Lew zjadl"<<endl;
                   // break;
                }
                else if (tablica[i][j]->daj_gatunek()=='k'){
                    tablica[i][j+1]->~CZwierze();
                     tablica[i][j+1]=nullptr;
                    cout<<"Krokodyl zjadl"<<endl;
                  //  break;
                }
            }

           if((j-1)>(-1)  &&   tablica[i][j-1]!=nullptr){
                if(tablica[i][j]->daj_gatunek() == tablica [i][j-1]->daj_gatunek()){
                    if(tablica[i][j]->sprawdz_plec() != tablica [i][j-1]->sprawdz_plec()){

                             char gat=tablica[i][j]->daj_gatunek();
                              narodziny(gat);
                             cout<<"Narodziny "<<gat<<endl;
                              //break;

                    }
                }
                else if (tablica[i][j]->daj_gatunek()=='l'){
                    tablica[i][j-1]->~CZwierze();
                    tablica[i][j-1]=nullptr;
                    cout<<"Lew zjadl"<<endl;
                   // break;
                }
                else if (tablica[i][j]->daj_gatunek()=='k'){
                    tablica[i][j-1]->~CZwierze();
                    tablica[i][j-1]=nullptr;
                    cout<<"Krokodyl zjadl"<<endl;
                   // break;
                }
            }

            if((i-1)>(-1)   &&   tablica[i-1][j]!=nullptr){
                if(tablica[i][j]->daj_gatunek() == tablica [i-1][j]->daj_gatunek()){
                    if(tablica[i][j]->sprawdz_plec() != tablica [i-1][j]->sprawdz_plec()){

                              char gat=tablica[i][j]->daj_gatunek();
                              narodziny(gat);
                              cout<<"Narodziny "<<gat<<endl;
                           //   break;

                    }
                }
                else if (tablica[i][j]->daj_gatunek()=='l'){
                    tablica[i-1][j]->~CZwierze();
                     tablica[i-1][j]=nullptr;
                    cout<<"Lew zjadl"<<endl;
                  //  break;
                }
                else if (tablica[i][j]->daj_gatunek()=='k'){
                    tablica[i-1][j]->~CZwierze();
                    tablica[i-1][j]=nullptr;
                    cout<<"Krokodyl zjadl"<<endl;
                   // break;
                }
            }
        }//if zwierze

        }//do fora
}



