#ifndef CW_WZOR
#define CW_WZOR

#include <iostream>
using namespace std;

class Wzor
{
private:
    char znak;
    int dlugosc;
public:
    Wzor(char znak = '?', int dlugosc = 1);
    ~Wzor();
    void opis();
    void drukuj();
    void SetWzor(char znak, int dlugosc);
    void SetZnak(char znak);
};



#endif // CW_WZOR
