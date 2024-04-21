#ifndef STUDENT_H
#define STUDENT_H

#include <iostream> //nie trzeba pisac w mainie

using namespace std;

class Student
{
    string imie;
    string nazwisko;
    int ocena;
    float srednia;
    bool czyZdaje;
public:
    //Student() = delete; usuniecie konstruktora domyslnego
    //Student(); -> konstruktor bezparametrowy nie potrzebny-> mamy wartosci domyslne w parametrowym
    Student(string imie="brak", string n="brak", int o=0, float s=0, bool cz=false);//wartosci domyslne tylko w pliku .h
    ~Student();
    void wydruk() const; //const- funkcja nie moze zmieniac funkcji studenta na ktorego dziala
    void setCzyZdaje(bool czyZdaje);
    void setImie(string imie);
};


#endif // STUDENT_H
