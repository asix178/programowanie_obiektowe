#include"plansza.h"

int main()
{
    Plansza P(10,10);
    cout << P << endl << endl;
    P.dodaj(0,0,Typ::A);
    P.dodaj(3,2,Typ::B);
    P.dodaj(9,8,Typ::C);
    P.dodaj(2,7,Typ::D);
    cout << P << endl << endl;
    P.zamien(0,0,3,2);
    P.zamien(9,8,9,0);
    cout << P << endl << endl;
    P.przesun(0,0,1,1);//przesuwa obiekt z pola (0,0) na (1,1).
    cout << P <<endl;

    return 0;
}
