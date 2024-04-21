#include"ogrod.h"

int main()
{
    Roslina* r1 = new Kwiat(50);//argument to wysokosc
    //kazda roslina ma wysokosc
    Roslina* r2 = new Krzew(170,"krzew1"); //drugi argument to nazwa
    Roslina* r3 = new Krzew(135,"krzew2");
    Roslina* r4 = new Krzew(155,"krzew3");
    Ogrod o(5,6);
    cout<<o<<endl;
    o.sadz(r1,0,3);//sadzimy rosline
    o.sadz(r2,2,4);
    o.sadz(r3,3,1);
    o.sadz(r4,4,0);
    cout<<o<<endl;
    o>>150; //usuwa wszystkie rosliny o wysokosci wiekszej niz 150
//    //(wartosc nie moze byc stala)
    cout<<o<<endl;
    delete r1;
    delete r2;
    delete r3;
    delete r4;
    return 0;
}
