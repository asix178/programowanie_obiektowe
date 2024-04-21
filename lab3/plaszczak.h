#ifndef PLASZCZAK_H
#define PLASZCZAK_H

#include <iostream>
using namespace std;

class Plaszczak
{
    int x;
    int y; //wspolrzedne
    char z; //wyglad plaszczaka
public:
    Plaszczak(char z='?',int x = 0, int y = 0) : x(x),y(y),z(z) {}
    ~Plaszczak(){cout<<"~"<<z<<endl;}
    void ruchPrawo(){x++;}
    void ruchLewo() {x--;}
    void ruchGora() {y--;}
    void ruchDol() {y++;}
    void drukuj() const {cout<<z;}
    int getx() const {return x;}
    int gety() const {return y;}
    void setx(int x) {this ->x = x;}
    void sety(int y) {this ->y = y;}
};

#endif // PLASZCZAK_H
