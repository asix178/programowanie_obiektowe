#ifndef OBIEKT
#define OBIEKT

#include <iostream>

using namespace std;

class Obiekt
{
public:
  virtual ~Obiekt() = default;
  virtual void print(ostream &os) const = 0;
};

class A : public Obiekt
{
public:
    ~A(){cout<<"/~A";}
    void print(ostream &os) const {os<<"A ";}
};

class B : public Obiekt
{
public:
    ~B(){cout<<"/~B";}
    void print(ostream &os) const {os<<"B ";}
};

class C : public Obiekt
{
public:
    ~C(){cout<<"/~C";}
    void print(ostream &os) const {os<<"C ";}
};

class D : public Obiekt
{
public:
    ~D(){cout<<"/~D";}
    void print(ostream &os) const {os<<"D ";}
};

#endif // OBIEKT
