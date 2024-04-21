#include "ciag.h"
#include<ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    cout << "============ obiekty T1 i T2 ============\n";
    Ciag T1; //brak elementow
    Ciag T2(6,1,5); //6 elementow wylosowanych z zakresu [1..5]
    cout << "T1 = " << T1 << endl;
    cout << "T2 = " << T2 << endl;
    Ciag T3 = T2;//dziala konstruktor kopiujacy Ciag T3(T2)
    T3[0] = 1;
    cout << "====== niezaleznosc obiektow T2 i T3 =========\n";
    cout << "T2 = " << T2 << endl;//czy kopie sa niezalezne?
    cout << "T3 = " << T3 << endl;
    T3 = T2;//dziala operator=
    T3[0] = 5;
    cout << "====== niezaleznosc obiektow T2 i T3 =========\n";
    cout << "T2 = " << T2 << endl;//czy obiekty T2 i T3 sa niezalezne?
    cout << "T3 = " << T3 << endl;
    cout << "======= operatory inkrementacji============\n";
    cout << "++T1 = " << ++T1 << endl;//operator++ zwieksza ciag o jeden
    cout << "++T2 = " << ++T2 << endl;//element z danego zakresu
    cout << "T1++ = " << T1++ << endl;//tutaj operator++ zwraca stara kopie
    cout << "T2++ = " << T2++ << endl;//upewnij sie wiec, ze konstr. kopiujacy
                                      //dziala poprawnie
    cout << "======= operator porownania ==============\n";
    cout << "T2 = " << T2 << endl;
    cout << "T3 = " << T3 << endl;
    cout << "Ciagi T1 i T2 " << (T1==T2?"sa":"nie sa") << " rowne.";
    return 0;
}
