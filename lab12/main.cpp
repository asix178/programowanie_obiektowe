#include "array.h"

class Obiekt
{
    int x;
public:
    Obiekt(int x = 0) : x(x) {} ///Musi byc konstruktor jednoparametrowy zeby dzialalo dla template!!!
    friend ostream& operator<<(ostream &os, const Obiekt& o) //operator przesuniecia bitowego
    {
        os<<"o["<<o.x<<"]";
        return os;
    }
    bool operator < (const Obiekt& o) const
    {
        return x < o.x;
    }

};

int main()
{
    srand(time(0));
    ArrayTP<int,10> arr1;
    arr1.print();
    arr1.SortTab();
    arr1.print();

    ArrayTP<Obiekt,5> arr2;
    arr2.print();
    arr2.SortTab();
    arr2.print();
    return 0;
}
