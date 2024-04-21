#include"wzor.h"
Wzor::Wzor(char z, int d) : z(z),d(d){}

Wzor::~Wzor()
{
    cout<<"!usuwam: "<<z<<"\n";
}

void Wzor::opis() const
{
    cout<<d<<"x"<<"'"<<z<<"'\n";
}

void Wzor::drukuj() const
{
    cout<<string(d,z)<<endl;
}

void Wzor::ustaw(char z, int d)
{
    this -> d=d;
    this -> z=z;
}

void Wzor::ustaw(char z)
{
    this -> ustaw(z, this -> d);
}
