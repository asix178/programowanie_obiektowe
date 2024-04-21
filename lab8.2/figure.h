#ifndef FIGURE
#define FIGURE

#include <iostream>

using namespace std;

class Figure
{
public: /// konstruktor defaultowy -> sam sie utworzy
    virtual ~Figure() = default;
    virtual void paint() const = 0;
};

class Square : public Figure
{
public:
    ~Square () {cout<<"square deleted";}
     virtual void paint() const {cout << char(254);}
};

class Triangle : public Figure
{
public:
    ~Triangle () {cout<<"triangle deleted";}
     virtual void paint() const {cout << char(30);}
};

class Circle : public Figure
{
public:
    ~Circle () {cout<<"circle deleted";}
     virtual void paint() const {cout << "o";}
};


#endif // FIGURE
