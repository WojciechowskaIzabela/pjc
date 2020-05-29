#include "uzytkownik.h"
#include <iostream>

using namespace std;

CUzytkownik::CUzytkownik (){

}

int CUzytkownik::czy_przerwac_symulacje(){
    int p;
       cout<<endl<<"Czy chcesz zakonczyc symulacje??? 1-Tak, 0-Nie"<<endl;
       cin>>p;
       if(p>1 || p<0)
           while (p>1 || p<0){
           cout<<"Musisz podac 1/0!"<<endl;
           cin>>p;
       }
       return p;
       }





void CUzytkownik::czy_dodac_zwierze(){
    cout<<"Czy chcesz dodac zwierze?!"<<endl;
    cout<<"Tak - 1, Nie - 0"<<endl;
    int p;
    cin>>p;
    if(p>1 || p<0){
        while (p>1 || p<0){
        cout<<"Musisz podac 1/0!"<<endl;
        cin>>p;
    }
    }
    if(p==1)
               turka->dodaj_zwierze();
    }



