#include "box.h"

int main()
{
    Box<int> b;
    b.add(3); b.add(4); b.add(-5);
    b.print(); //wydrukuje: 3 4 -5
    b.deleteT(0);
    b.print(); //wydrukuje 4 -5
    b.update(0,1);
    b.print(); //wydrukuje 1 -5
    return 0;
}
