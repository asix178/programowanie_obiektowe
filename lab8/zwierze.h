#ifndef ZWIERZE
#define ZWIERZE

#include <iostream>

using namespace std;

class Zwierze ///klasa abstrakcyjna
{
public:
    Zwierze() = default;
    virtual ~Zwierze() = default;
    virtual void dajGlos() const = 0; ///metoda czysto wirtualna -> dlatego klasa abstrakcyjna
};

class Pies : public Zwierze /// dziedziczenie w sposob publiczny po klasie zwierze
{
public:
    virtual void dajGlos() const {cout<<"--- hau hau ---";} //klasa NIE abstrakcyjna
    ~Pies(){cout<<"~Pies \n";}
};

class Waz: public Zwierze /// dziedziczenie w sposob publiczny po klasie zwierze
{
public:
    virtual void dajGlos() const {cout<<"--- sss sss ---";} //klasa NIE abstrakcyjna
    ~Waz(){cout<<"~Waz \n";}
};

class Lis : public Zwierze /// dziedziczenie w sposob publiczny po klasie zwierze
{
public:
    virtual void dajGlos() const {cout<<"--- XXX XXX ---";} //klasa NIE abstrakcyjna
    ~Lis(){cout<<"~Lis \n";}
};

class Owca : public Zwierze /// dziedziczenie w sposob publiczny po klasie zwierze
{
public:
    virtual void dajGlos() const {cout<<"--- bee bee ---";} //klasa NIE abstrakcyjna
    ~Owca(){cout<<"~Owca \n";}
};

class Krowa : public Zwierze /// dziedziczenie w sposob publiczny po klasie zwierze
{
public:
    virtual void dajGlos() const {cout<<"--- muu muu ---";} //klasa NIE abstrakcyjna
    ~Krowa(){cout<<"~Krowa \n";}
};
class Zaba : public Zwierze /// dziedziczenie w sposob publiczny po klasie zwierze
{
public:
    virtual void dajGlos() const {cout<<"--- kum kum ---";} //klasa NIE abstrakcyjna
    ~Zaba(){cout<<"~Zaba \n";}
};




#endif // ZWIERZE

