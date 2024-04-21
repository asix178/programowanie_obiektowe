#ifndef ZBIOR
#define ZBIOR

#include"Punkt.h"
#include<vector>

class Zbior{
public:
    vector<Punkt> lista;
    Zbior() = default;
    Zbior(Zbior& z);
    Zbior& operator =(const Zbior& z);

    int szerokosc();
    int wysokosc();
    bool czyPunkt(int x, int y);
    void drukuj();
    void usun();

    friend istream& operator >>(istream& os, Zbior& z);
    friend ostream& operator <<(ostream& os, Zbior& z);

};

Zbior::Zbior(Zbior& z)
{
    lista = z.lista;
}
//operator przypisania
Zbior& Zbior::operator=(const Zbior& z)
{
    if(this != &z){
        lista = z.lista;
    }
    return *this;
}

int Zbior::szerokosc()
{
    int max_x = 0;
    for(Punkt p : lista){
        if(max_x<p.getX()){
            max_x = p.getX();
        }
    }
    return max_x;
}

int Zbior::wysokosc()
{
    int max_y = 0;
    for(Punkt p : lista){
    if(max_y<p.getY()){
        max_y = p.getY();
    }
    }
    return max_y;
}

bool Zbior::czyPunkt(int x, int y)
{
    for(Punkt p : lista){
        if(p.getX() == x && p.getY() == y) return true;
    }
    return false;
}


void Zbior::drukuj()
{
    for(Punkt p : lista){
        cout<<"Punkt: "<<p.getX()<<","<<p.getY()<<endl;
    }
}

void Zbior::usun()
{
    lista.erase(lista.begin(),lista.end());
}

istream& operator >>(istream& is, Zbior& z)
{
    int x;
    int y;
    cout<<"Podaj wspolrzedne punktu (x,y): ";
    is>>x>>y;

    if(!z.czyPunkt(x,y)){
        z.lista.push_back(Punkt(x,y));
    }
    else{
        cout<<"Punkt o podanych wspolrzednych juz istnieje";
    }
    return is;
}

ostream& operator <<(ostream& os, Zbior& z)
{
    for(int i = 0; i<z.wysokosc() + 1 ; i++){
        for (int j = 0; j<z.szerokosc() + 1; j++){
            if(z.czyPunkt(j,i)){
                os<<"x ";
            }
            else{
                os<<". ";
            }
        }
        os<<endl;
    }
    return os;
}
#endif // ZBIOR

