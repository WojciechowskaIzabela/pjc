#include <iostream>
#include "symulacja.h"

using namespace std;

int main()
{
    cout<<endl<<endl<<endl;
    cout<<"****************  Witaj Użytkowniku na Wyspie!!!  ****************"<<endl<<endl;
    cout<<" Szybkie zasady : "<<endl<< " Na wyspie znajdują się rózne gatunki zwierząt, które mogą się poruszac, rozmanac oraz atakowac"<<endl;
     cout<<"    Twoje umiejetnosci to: "<<endl<<"   1. Możliwość tworzenia zwierzęcia po skończeniu każdej tury"<<endl;
     cout<< "   2. Decydowanie kiedy skończyc symulacje"<<endl;
     cout<<"   3. Rozmiar kwadratowej wyspy"<<endl<<endl<<"Zacznijmy od tego ostatniego!"<<endl<<endl;
    CSymulacja s;
    s.przeprowadz_symulacje();
    return 0;
}

