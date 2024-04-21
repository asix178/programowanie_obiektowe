#ifndef box
#define box
#include <iostream>
#include <vector> ///!!!!
using namespace std;

template <typename T>
class Box
{
private:
    vector<T> lista;
public:
    Box();
    void add(const T& x);
    void print() const;
    void deleteT(int ind);
    void update(int ind, const T& x);
};

template <typename T>
Box<T>::Box(){}

template <typename T>
void Box<T>::add(const T& x)
{
    lista.push_back(x);
}

template <typename T>
void Box<T>::print() const
{
    for(const T& i : lista)
    {
        cout<< i <<" ";
    }
        cout<<endl;
}

template <typename T>
void Box<T>::deleteT(int ind)
{
    //vector<T>::iterator it = lista.begin()+ind; -> nie da sie
    lista.erase(lista.begin()+ind);
}

template <typename T>
void Box<T>::update(int ind, const T& x)
{
    lista[ind] = x;
}
#endif // box

