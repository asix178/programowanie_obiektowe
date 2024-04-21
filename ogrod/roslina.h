#ifndef ROSLINA
#define ROSLINA

#include <iostream>

using namespace std;

class Roslina{
private:
    int wysokosc;
public:
    Roslina(int wysokosc) : wysokosc(wysokosc){};
    virtual ~Roslina(){};
    int getWysokosc(){return wysokosc;}
    virtual char getZnak() const = 0;

};

class Kwiat : public Roslina{
public:
    Kwiat(int wysokosc) : Roslina(wysokosc){};
    char getZnak()const{return 'o';}
    ~Kwiat(){cout<<getZnak()<<" usunieto"<<endl;}
};

class Krzew : public Roslina{
private:
    string nazwa;
public:
    Krzew(int wysokosc, string nazwa) : Roslina(wysokosc), nazwa(nazwa){};
    string getNazwa(){return nazwa;}
    char getZnak()const{return 'K';}
    ~Krzew(){cout<<getZnak()<<" "<<nazwa<<" usunieto"<<endl;}
};

#endif // ROSLINA
