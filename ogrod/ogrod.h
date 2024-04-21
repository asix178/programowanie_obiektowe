#ifndef OGROD
#define OGROD

#include"roslina.h"

class Ogrod{
private:
    int wysokosc;
    int szerokosc;
    Roslina** *tab;
public:
    Ogrod(int wysokosc, int szerokosc);
    ~Ogrod();
    friend ostream& operator <<(ostream& os, const Ogrod& o);
    void sadz(Roslina* r, int x, int y);
    void operator >> (int wysokoscRosliny);

};
Ogrod::Ogrod(int wysokosc, int szerokosc) : wysokosc(wysokosc),szerokosc(szerokosc)
{
    tab = new Roslina** [wysokosc];

    for(int i = 0; i<wysokosc; i++){
        tab[i] = new Roslina* [szerokosc] {nullptr};
    }
}
Ogrod::~Ogrod()
{
    for(int i = 0; i<wysokosc; i++){
        delete [] tab[i];
    }
    delete[] tab;
    cout<<"Ogrod usuniety"<<endl;
}
ostream& operator <<(ostream& os, const Ogrod& o)
{
    for(int i = 0; i<o.wysokosc; i++){
        for(int j = 0; j<o.szerokosc; j++){
            if(o.tab[i][j]){
                os<<o.tab[i][j]->getZnak();
            }
            else{
            os<<".";
            }
        }
        os<<endl;
    }
    return os;
}

void Ogrod::sadz(Roslina* r, int x, int y)
{
    if(tab[x][y]){
        return;
    }
    tab[x][y] = r;
}
void Ogrod::operator>>(int wysokoscRosliny)
{
    for(int i = 0; i<wysokosc; i++){
        for(int j = 0; j<szerokosc; j++){
            if(tab[i][j] && tab[i][j]->getWysokosc() > wysokoscRosliny){
                tab[i][j] = nullptr;
            }
        }
    }
}

#endif // OGROD
