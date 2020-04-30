#include "uzytkownik.h"
#include <iostream>


using namespace std;



Uzytkownik::Uzytkownik()
{

}

 void Uzytkownik::dodaj_zwierze(CZwierze ***tablica,int rozmiar, int tura){
     cout<<"Jeśli chcesz dodac: "<<endl<<"Krokodyla wcisnij K"<<endl<<"Gazele wcisnij G"<<endl<<"Lwa wcisnij L"<<endl;
     char co;
     cin>>co;

     cout<<endl<<"Podaj wspolrzedne gdzie chcesz dodac zwierze ( pole musi byc PUSTE!)"<<endl;
     int x,y;
     cin>>x;
     cin>>y;
     while((tablica[x-1][y-1]) != (NULL) || (x)>rozmiar || y>rozmiar || x<0 || y<0){
         cout<<"PODAJ PUSTE POLE"<<endl;
         cin>>x;
         cin>>y;
      }

     cout<<"Podaj plec (k/m) zwierzecia oraz imie"<<endl;
     char pl;
     cin>>pl;
     string im;
     cin>>im;

     x=x-1;
     y=y-1;
     if(co=='k' || co=='K'){
         tablica[x][y]=new CKrokodyl(pl,tura,im);
     }

     if(co=='G' || co=='g')  {
         tablica[x][y]=new CGazela(pl,tura,im);
     }

     if(co=='l' || co=='L'){
         tablica[x][y]=new CLew(pl,tura,im);
     }
 }
