#include "cw_wzor.h"
Wzor::Wzor(char znak, int dlugosc) : znak(znak), dlugosc(dlugosc){}

Wzor::~Wzor()
{
    cout<<"Usuwam "<<znak<<"\n";
}

void Wzor::opis()
{
    cout<<dlugosc<<" x "<<znak<<endl;
}

void Wzor::drukuj()
{
    for (int i = 0; i<dlugosc; i++)
    {
        cout<<znak;
    }
    cout<<endl;
}

void Wzor::SetWzor(char znak, int dlugosc)
{
    this -> znak = znak;
    this -> dlugosc = dlugosc;
}

void Wzor::SetZnak(char znak)
{
    this -> SetWzor(znak, this -> dlugosc); ///?
}
