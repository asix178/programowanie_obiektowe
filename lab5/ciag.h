#ifndef CIAG
#define CIAG

#include<iostream>
using namespace std;

class Ciag
{
private:
    int* tab;
    int r;
    int min;
    int max;
public:
    Ciag();
    Ciag(int r, int min, int max);
    Ciag(const Ciag& c);
    ~Ciag();
    friend ostream& operator<<(ostream& os, const Ciag& c);
    int& operator [] (int i);
    Ciag& operator = (const Ciag& c);
    Ciag& operator++(); //++C
    Ciag operator++(int); //C++
    bool operator == (const Ciag& c);
};


#endif // CIAG
