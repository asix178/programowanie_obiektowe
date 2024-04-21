#ifndef ROSLINA
#define ROSLINA

#include <iostream>

using namespace std;

class Roslina{
private:
    int wysokosc;
public:
    Roslina(int wysokosc) : wysokosc(wysokosc){};
    virtual ~Roslina() {}
    int getWysokosc(){return wysokosc;}
    virtual char getSymbol() const = 0;
};

class Kwiat : public Roslina{
public:
    Kwiat(int wysokosc) : Roslina (wysokosc){};
    char getSymbol() const{return 'o';}
    ~Kwiat(){cout<<getSymbol()<<" usunieto"<<endl;}
};

class Krzew : public Roslina{
private:
    string nazwa;
public:
    Krzew(int wysokosc, string nazwa) : Roslina(wysokosc), nazwa(nazwa){};
     char getSymbol() const{return 'K';}
    ~Krzew(){cout<<getSymbol()<<" "<<nazwa<<" usunieto"<<endl;}
    string getNazwa(){return nazwa;}
};
#endif // ROSLINA
