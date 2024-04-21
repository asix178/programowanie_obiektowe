#ifndef PULKA
#define PULKA

#include"pudelko.h"
#include<vector>

class Polka{
public:
    ~Polka() {cout<<"usunieta polka"<<endl;}
    vector<Pudelko*> pudelka;
    void postaw(Pudelko* p);
    friend ostream& operator<< (ostream&os, const Polka& p);
    void operator -= (char typ);
};
void Polka::postaw(Pudelko* p)
{
    pudelka.push_back(p);
}

ostream& operator<< (ostream&os, const Polka& p)
{
    for(Pudelko* d : p.pudelka){
        os<<d->getZnak()<<"(";
        if(d->getCzyPuste()){
            os<<" puste";
        }
        else{
            os<<" niepuste";
        }
        os<<")  ";
    }
    os<<endl;
    return os;
}
void Polka::operator-=(char typ)
{
    for(int i =0; i<pudelka.size(); i++){
        if(pudelka[i]->getZnak() == typ){
            pudelka.erase(pudelka.begin()+i);
        }
    }
}

#endif // PULKA
