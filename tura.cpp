#include "tura.h"



using namespace std;

CTura::CTura(){

}




void CTura::przeprowadz_ture(CZwierze ***tablica, int rozmiar){

    for (int i = 0; i < rozmiar; i++) {
            for (int j = 0; j <rozmiar; j++) {
                if(tablica[i][j]==NULL){
                    cout<<"maciek"<<endl;
                }

                else
                    tablica[i][j]->porusz_sie(&tablica,rozmiar,i,j);
                   }



                     }
    }




void CTura::stworz_losowo(CZwierze ***tablica,int rozmiar, int tura, char jakie_zwierze){



    int x=k.losuj_z_przedzialu(0,(rozmiar-1));
    int y=k.losuj_z_przedzialu(0,(rozmiar-1));

   while((tablica[x][y]) != (NULL)){
    int x=k.losuj_z_przedzialu(0,(rozmiar-1));
   int y=k.losuj_z_przedzialu(0,(rozmiar-1));
    }

   char pl;
   int losowanie_plci=k.losuj_z_przedzialu(1,2);
   if(losowanie_plci==1)
       pl='k';
    else
       pl='m';

   string im;
   cout<<"podaj imie nowego zwierzecia"<<endl;
   cin>>im;


    if(jakie_zwierze=='g'){
        tablica[x][y] = new CGazela;
        tablica[x][y]->plec=pl;
        tablica[x][y]->imie = im;
        tablica[x][y]->tura_obecna=tura;
    }


    if(jakie_zwierze=='k'){
        tablica[x][y] = new CKrokodyl;
        tablica[x][y]->plec=pl;
        tablica[x][y]->imie = im;
        tablica[x][y]->tura_obecna=tura;
    }



    if(jakie_zwierze=='l'){
        tablica[x][y] = new CLew;
        tablica[x][y]->plec=pl;
        tablica[x][y]->imie = im;
        tablica[x][y]->tura_obecna=tura;
    }





  }









void CTura::startowe_zwierzeta(CZwierze ***tablica, int rozmiar){

    CDodatek d1;

    int X=d1.losuj_z_przedzialu(0,rozmiar-1);
    int Y=d1.losuj_z_przedzialu(0,rozmiar-1);

    while((tablica[X][Y]) != (NULL)){
     X=d1.losuj_z_przedzialu(0,(rozmiar-1));
    Y=d1.losuj_z_przedzialu(0,(rozmiar-1));
     }
    tablica[X][Y]=new CLew('k');


   // string im;
   // cout<<"Podaj imie lwicy "<<endl;
   // cin>>im;
  //  tablica[X][Y]->imie=im;

    X=d1.losuj_z_przedzialu(0,rozmiar-1);
    Y=d1.losuj_z_przedzialu(0,rozmiar-1);

    while((tablica[X][Y]) != (NULL)){
     X=d1.losuj_z_przedzialu(0,(rozmiar-1));
    Y=d1.losuj_z_przedzialu(0,(rozmiar-1));
     }
    tablica[X][Y]=new CLew('m');


   // cout<<"Podaj imie lwa "<<endl;
   // cin>>im;
   // tablica[X][Y]->imie=im;

    // tworzenie Gazeli
     int x=d1.losuj_z_przedzialu(0,rozmiar-1);
     int y=d1.losuj_z_przedzialu(0,rozmiar-1);

    while((tablica[x][y]) != (NULL)){
     x=d1.losuj_z_przedzialu(0,(rozmiar-1));
    y=d1.losuj_z_przedzialu(0,(rozmiar-1));
     }
    tablica[x][y]=new CGazela('k');



    //cout<<"Podaj imie gazeli (samica) "<<endl;
   // cin>>im;
   // tablica[x][y]->imie=im;

    x=d1.losuj_z_przedzialu(0,rozmiar-1);
    y=d1.losuj_z_przedzialu(0,rozmiar-1);

    while((tablica[x][y]) != (NULL)){
     x=d1.losuj_z_przedzialu(0,(rozmiar-1));
    y=d1.losuj_z_przedzialu(0,(rozmiar-1));
     }
    tablica[x][y]=new CGazela('m');


    //cout<<"Podaj imie gazeli (samiec)"<<endl;
   // cin>>im;
    //tablica[x][y]->imie=im;

    //tworzenie krokodyli
     X=d1.losuj_z_przedzialu(0,rozmiar-1);
     Y=d1.losuj_z_przedzialu(0,rozmiar-1);

    while((tablica[X][Y]) != (NULL)){
     X=d1.losuj_z_przedzialu(0,(rozmiar-1));
    Y=d1.losuj_z_przedzialu(0,(rozmiar-1));
     }
    tablica[X][Y]=new CKrokodyl('k');



    //cout<<"Podaj imie krokodyla(samica) "<<endl;
   // cin>>im;
   // tablica[X][Y]->imie=im;

    X=d1.losuj_z_przedzialu(0,rozmiar-1);
    Y=d1.losuj_z_przedzialu(0,rozmiar-1);

    while((tablica[X][Y]) != (NULL)){
     X=d1.losuj_z_przedzialu(0,(rozmiar-1));
    Y=d1.losuj_z_przedzialu(0,(rozmiar-1));
     }
    tablica[X][Y]=new CKrokodyl('m');


   // cout<<"Podaj imie krokodyla (samiec) "<<endl;
  //  cin>>im;
 //   tablica[X][Y]->imie=im;

}