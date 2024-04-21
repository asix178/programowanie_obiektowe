#include <iostream>
#include"container.h"

using namespace std;

int main()
{
    Element a;
    cout<<a<<endl;
    cin>>a;
    cout<<a<<endl;
    Container x(3);
    cout<<x<<endl;
    cin>>x;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
    x--;
    cout<<x<<endl;
    cout<<"Element nr. 2: "<<endl;
    cout<<"["<<x[1]<<"]"<<endl;;
    cout<<"Element nr. 5(zwraca ostatni): "<<endl;
    cout<<"["<<x[5]<<"]"<<endl;;
    return 0;
}
