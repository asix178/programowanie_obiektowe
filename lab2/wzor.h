#ifndef WZOR
#define WZOR

#include<iostream>

using namespace std;

class Wzor
{
    char z;
    int d;

public:
    Wzor(char z='?',int d=3);
    ~Wzor();
    void opis() const;
    void drukuj() const;
    void ustaw(char z, int d);
    void ustaw(char z);
};

#endif // WZOR
