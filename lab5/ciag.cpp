#include "ciag.h"
#include<cstdlib>
Ciag::Ciag()
{
     min = max = r = 0;
     tab = nullptr;
}

Ciag::Ciag(int r, int min, int max)
{
    this -> r = r;
    this -> min = min;
    this -> max = max;
    tab = new int[r];
    for (int i=0; i<r; i++)
    {
        tab[i] = rand() % (max - min + 1) + min;
    }
}
Ciag::Ciag(const Ciag& c)
{
    this -> r = c.r;
    this -> min = c.min;
    this -> max = c.max;
    tab = new int[r];
    for (int i=0; i<r; i++)
    {
        tab[i] = c.tab[i];
    }
}

Ciag::~Ciag()
{
    delete[] tab;
}

ostream& operator<<(ostream& os, const Ciag& c)
{
    cout<<'[';
    for (int i=0; i<c.r; i++)
    {
        cout << c.tab[i] << ((i<c.r -1)?",":"");
    }
    cout<<']';
    return os;
}
int& Ciag::operator[](int i)
{
    //mozna dorobic warunek zeby byl dobry indeks
    return tab[i];
}
Ciag& Ciag::operator=(const Ciag& c)
{
    if(this == &c)
    {
        return *this;
    }
    delete[] tab;
    this -> r = c.r;
    this -> min = c.min;
    this -> max = c.max;
    tab = new int[r];
    for (int i=0; i<r; i++)
    {
        tab[i] = c.tab[i];
    }
    return *this;
}
Ciag& Ciag::operator++()
{
    int* tmp = new int[r+1];
    for(int i=0; i<r; i++)
    {
        tmp[i]=tab[i];
    }

    tmp[r]= rand() % (max - min + 1) + min;
    delete[] tab;
    tab = tmp;
    r++;


    return *this;
}

Ciag Ciag::operator++(int)
{
    Ciag kopia = *this;//copy
    ++(*this);
    return kopia;
}
bool Ciag::operator==(const Ciag& c)
{
    if(r!=c.r)
    {
        return false;
    }
    for(int i=0; i<r; i++)
    {
        if(tab[i]!=c.tab[i])
        {
            return false;
        }
    }
    return true;
}
