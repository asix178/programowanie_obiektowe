#ifndef OGROD
#define OGROD

#include "Roslina.h"
#include <vector>

class Ogrod{
private:
    int wysokosc;
    int szerokosc;
    Roslina** *tab;
public:
    Ogrod(int wysokosc, int szerokosc) : wysokosc(wysokosc), szerokosc(szerokosc){
        tab = new Roslina** [wysokosc];
        for(int i = 0; i<wysokosc; i++){
            tab[i] = new Roslina* [szerokosc] {nullptr};
        }
    };
    ~Ogrod(){
        for(int i = 0; i<wysokosc; i++){
            delete[] tab[i];
        }
        delete[] tab;
        cout<<"Ogrod usuniety"<<endl;
    }
    friend ostream& operator <<(ostream& os, const Ogrod& o);
    void operator >>(int wysokoscRosliny);
    void sadz(Roslina* r, int wys, int szer);
};

ostream& operator <<(ostream& os, const Ogrod& o)
{
    for(int i = 0; i<o.wysokosc; i++){
        for(int j = 0; j<o.szerokosc; j++){
            if(o.tab[i][j]){
                os<<o.tab[i][j]->getSymbol();
            }
            else{
                os<<".";
            }
        }
        os<<endl;
    }
    return os;
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

void Ogrod::sadz(Roslina* r, int wys, int szer)
{
    if(tab[wys][szer]){return;}
    tab[wys][szer] = r;

}



#endif // OGROD
