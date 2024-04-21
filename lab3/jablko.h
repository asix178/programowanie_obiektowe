#ifndef JABLKO
#define JABLKO

#include <iostream>
using namespace std;

class Jablko
{
    int x_jablko;
    int y_jablko;
    char j;
public:
    Jablko(char j='*',int x_jablko=10, int y_jablko=10) : j(j),x_jablko(x_jablko),y_jablko(y_jablko){};
    ~Jablko() {cout<<"~"<<j<<endl;};
    int getx_jablko() const {return x_jablko;}
    int gety_jablko() const {return y_jablko;}
    void drukuj_jablko() const {cout<<j;}
    void setx_jablko(int x_jablko) {this ->x_jablko = x_jablko;}
    void sety_jablko(int y_jablko) {this ->y_jablko = y_jablko;}

};


#endif // JABLKO
