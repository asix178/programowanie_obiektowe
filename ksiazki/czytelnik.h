#ifndef CZYTELNIK
#define CZYTELNIK

#include"ksiazka.h"
#include<vector>

class Czytelnik{
private:
    string imie;
    string nazwisko;
    int nr;
    vector<Ksiazka*> wypozyczoneKsiazki;
public:
    Czytelnik(int nr, string imie, string nazwisko) : nr(nr), imie(imie), nazwisko(nazwisko){};
    ~Czytelnik() = default;
    void wypozycz(Ksiazka* k);
    void operator -= (int id);
    void usunNaukowe();
    friend ostream& operator << (ostream& os, const Czytelnik& cz);
};
void Czytelnik::wypozycz(Ksiazka* k)
{
    wypozyczoneKsiazki.push_back(k);
}

void Czytelnik::operator-=(int id)
{
    for(int i =0; i<wypozyczoneKsiazki.size(); i++){
        if(wypozyczoneKsiazki[i]->getId() == id){
            wypozyczoneKsiazki.erase(wypozyczoneKsiazki.begin()+i);
            return;
        }
    }
}

void Czytelnik::usunNaukowe()
{
    for(int i =0; i<wypozyczoneKsiazki.size(); i++){
        if(dynamic_cast<Naukowa*>(wypozyczoneKsiazki[i]) != nullptr){
            wypozyczoneKsiazki.erase(wypozyczoneKsiazki.begin() + i);
        }
    }
}


ostream& operator << (ostream& os, const Czytelnik& cz)
{
    os<<"Czytelnik: "<<cz.imie<< " "<<cz.nazwisko << " wypozyczyl nastepujace ksiazki:\n";
        for(Ksiazka* k : cz.wypozyczoneKsiazki)
        {
            os<<"ID: "<<k->getId()<<", Autor: "<<k->getAutor()<<", Tytul: "<<k->getTytul()<<endl;
        }
        return os;
}


#endif // CZYTELNIK
