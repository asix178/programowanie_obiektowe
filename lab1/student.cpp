#include "student.h"
//Student::Student() :imie("???"),ocena(0) //alternatywnie
//{
//   //    imie="???";
//    nazwisko="???";
//   //    ocena=0;
//    srednia= 0.0f;//postfix zeby nie bylo double
//    czyZdaje=false;
//}

Student::Student(string imie, string n, int o, float s, bool cz)//: nazwisko(n)
{
    this -> imie=imie;//identyfikator obiektu
    nazwisko=n;
    ocena=o;
    srednia=s;
    czyZdaje=cz;
}

Student::~Student()
{
    cout<<"<<<usuwam: <<"<<imie<<" "<<nazwisko<<">>> \n";
}

void Student::wydruk() const
{
    cout<<"Dane studenta: "<<imie<<" "<<nazwisko<<" ocena: "<<ocena<<" srednia: "<<srednia<<" czy zdaje: "<<(czyZdaje?"tak":"nie")<< endl;//wyrazenie warunkowe zamiart if

}

void Student::setCzyZdaje(bool czyZdaje)
{
    this -> czyZdaje=czyZdaje;
}
//prawy przycisk myszy->insert/refactor->all class methods without implementation
void Student::setImie(string imie)
{
    this->imie=imie;
}
