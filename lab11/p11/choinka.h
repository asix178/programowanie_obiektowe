#ifndef CHOINKA
#define CHOINKA

#include"ozdoba.h"
#include<vector>

enum class Znak{B,L,C};

class Choinka
{
    int n;
    vector<Ozdoba*> lista;
public:
    Choinka(int n);
    ~Choinka();
    friend ostream& operator<<(ostream& os, const Choinka& ch);
    void dodajOzdobe(Znak z, int w, int k);
};


Choinka::Choinka(int n) : n(n)
{
//    lista.assign(n*n, new Ozdoba);
//assign robi to samo co for ponizej
    for (int i = 0; i < n*n; i++) //n^2 -> policzone z ciagu choinki (1,3,5,7,...,2n-1)
    {
        lista.push_back(new Ozdoba);
    }
}

Choinka::~Choinka()
{
    for(int i = 0; i<n*n; ++i)
    {
        delete lista[i];
    }
    lista.clear();
}

ostream& operator<<(ostream& os, const Choinka& ch)
{
    for(int j = 0; j < ch.n; ++j)
    {
        for(int i = 0; i < ch.n-j-1;++i)
        {
            os <<' ';
        }
        for(int i = 0; i< 2*j+1; ++i)
        {
            ch.lista[i + j*j]->print(os);
        }
        os<<endl;
    }
    for(int i =0; i < ch.n - 1; ++i)
    {
        os<<" ";
    }
    os << "#";
    os<<endl;
    for(int i =0; i < ch.n - 1; ++i)
    {
        os<<" ";
    }
    os << "#";

    return os;
}

void Choinka::dodajOzdobe(Znak z, int w, int k)
{
    delete lista[k+w*w];
    switch(z)
    {
        case Znak::B:lista[k+w*w] = new Bombka; break;
        case Znak::C:lista[k+w*w] = new Cukierek; break;
        case Znak::L:lista[k+w*w] = new Lampka; break;
    }
}


#endif // CHOINKA
