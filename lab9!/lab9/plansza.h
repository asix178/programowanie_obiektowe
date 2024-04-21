#ifndef PLANSZA
#define PLANSZA

#include "Obiekt.h"

enum class Typ{A, B, C, D}; /// typ enumeryczny -> A=1 itd;

class Plansza
{
    int m;
    int n;
    Obiekt* **tab; //tablica dwuwymiarowa -> ** , elementami tablicy sa wskazniki wiec ** *
public:
    Plansza (int m, int n);
    virtual ~Plansza ();
    friend ostream& operator << (ostream& os, const Plansza&p);
    void dodaj(int x, int y, Typ t);
    void zamien (int a, int b, int c, int d);
    void przesun (int a, int b, int c ,int d);
};

Plansza::Plansza(int m, int n)
{
    this -> m = m;
    this -> n = n;

    /// konstruktor rablicy dwuwymiarowej

    tab = new Obiekt**[m]; // tablica jednowymiarowa wskaznikow
    for (int i = 0; i<m; i++)
    {
        tab[i] = new Obiekt*[n] {nullptr};
    }
}
Plansza::~Plansza()
{
    for (int i = 0; i<m; i++)
    {
        //usuwam pozostale obiekty
        for(int j = 0; j<n ;j++)
        {
            delete tab[i][j];
        }
        delete[] tab[i];
    }
    delete [] tab;
}

ostream& operator << (ostream& os, const Plansza&p)
{
    for (int j = 0; j<p.n; j++)
    {
        for(int i = 0; i<p.m; i++)
        {
            if (p.tab [i][j] != nullptr)
            {
                p.tab[i][j] -> print(os);
            }
            else
            {
                os<<". ";
            }
        }
        os<< endl;
    }
    return os;
}

void Plansza::dodaj(int x, int y, Typ t)
{
    //sprawdz czy wskaznik jest zajety
    delete tab[x][y];
    switch(t)
    {
    case Typ::A:
        tab[x][y] = new A;
        break;

    case Typ::B:
        tab[x][y] = new B;
        break;

    case Typ::C:
        tab[x][y] = new C;
        break;

    case Typ::D:
        tab[x][y] = new D;
        break;
    }
}
void Plansza::zamien(int a, int b, int c, int d)
{
    swap(tab[a][b],tab[c][d]);
}
void Plansza::przesun(int a, int b, int c, int d)
{
    delete tab[c][d];
    tab[c][d] = tab[a][b];
    tab[a][b] = nullptr;
}


#endif // PLANSZA
