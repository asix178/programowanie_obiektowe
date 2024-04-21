#ifndef KSIAZKI
#define KSIAZKI
#include <iostream>
using namespace std;

class Ksiazka{
private:
    int id;
    string autor;
    string tytul;
public:
    Ksiazka(int id, string autor, string tytul) : id(id), autor(autor), tytul(tytul){}
    virtual ~Ksiazka() {}
    int getId() const {return id;}
    string getAutor() const{return autor;}
    string getTytul() const{return tytul;}
};

class Powiesc : public Ksiazka{
private:
    string gatunek;
public:
    Powiesc(int id, string autor, string tytul, string gatunek) : Ksiazka(id,autor,tytul), gatunek(gatunek) {}
    string getGatunek()const {return gatunek;}
};

class Naukowa : public Ksiazka{
private:
    string dziedzina;
public:
    Naukowa(int id, string autor, string tytul, string dziedzina) : Ksiazka(id,autor,tytul), dziedzina(dziedzina) {}
    string getDziedzina()const {return dziedzina;}
};

class Historyczna : public Ksiazka{
private:
    string wiek;
public:
    Historyczna(int id, string autor, string tytul, string wiek) : Ksiazka(id,autor,tytul), wiek(wiek) {}
    string getWiek()const {return wiek;}
};
#endif // KSIAZKI

