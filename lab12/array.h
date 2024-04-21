#ifndef array
#define array

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> /// QUICKSORT
using namespace std;

template <typename T, int N>
class ArrayTP
{
private:
    T tab[N]; /// N jest const wiec mozemy w taki sposob zadeklarowac
public:
    ArrayTP();
//    void wypelnij(T element);
    void print() const;
    void SortTab();

};

template<typename T, int N>
ArrayTP<T,N>::ArrayTP() ///WAZNE <T,N>
{
    for (int i = 0; i < N; i++)
    {
        tab[i] = rand() % 10;
    }
}

template<typename T, int N>
void ArrayTP<T,N>::print() const
{
    for (int i = 0; i < N; i++)
        {
            cout<<tab[i]<<" ";
        }
    cout<<endl;
}

template<typename T, int N>
void ArrayTP<T,N>::SortTab()
{
    sort(tab, tab+N); ///QUICKSORT -> PODAJEMY ADRESY
}

#endif // array
