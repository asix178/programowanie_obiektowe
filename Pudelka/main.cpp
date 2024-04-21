#include"pulka.h"

int main()
{
    Pudelko* p1 = new A(true);
    Pudelko* p2 = new B(false,"bialy");
    Pudelko* p3 = new A(false);
    Pudelko* p4 = new C(true);

    Polka p; //na polce bedziemy ustawiac pudelka

    p.postaw(p1);
    p.postaw(p2);
    p.postaw(p3);
    p.postaw(p4);

    cout<<p<<endl;

    p -= 'A'; //usunie z polki wszystkie pudelka typu A
    cout<<p<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
