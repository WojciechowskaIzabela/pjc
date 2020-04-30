#ifndef DODATKI_H
#define DODATKI_H
#include <cstdlib>
#include<ctime>
#include <iostream>

using namespace std;

class CDodatek
{

public:
    CDodatek();

  int sprawdzenie(int dolna_granica,int gorna_granica, int &dana);

  void petla_poprawnosc(int dolna_granica,int gorna_granica, int &dana);
  int losuj_z_przedzialu(int ot,int to );
  void powitanie();

};





#endif // DODATKI_H
