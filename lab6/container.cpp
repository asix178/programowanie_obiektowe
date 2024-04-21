#include "container.h"

Element::Element(int x)
{
    this -> x = x;
}

int Element::getX()
{
    return x;
}

void Element::setX(int x)
{
    this -> x = x;
}

ostream& operator<<(ostream& os, const Element& e)
{
    cout<<e.x;
    return os;
}
istream& operator>>(istream& is, Element& e)
{
    cout<< "Podaj element: ";
    is >> e.x;
    return is;
}

Container::Container(int numberOfElements)
{
    this -> numberOfElements = numberOfElements;
    array=new Element[numberOfElements];
}

Container::Container(const Container& s)
{
    this -> numberOfElements = s.numberOfElements;
    array=new Element[numberOfElements];

    for(int i=0; i<numberOfElements; i++)
    {
        array[i].setX(s.array[i].getX());
    }
}

Container::~Container()
{
    delete [] array;
}

Container& Container::operator=(const Container& s)
{
    if (this == &s)
    {
        return *this;
    }

    this -> numberOfElements = s.numberOfElements;
    array=new Element[numberOfElements];

    for(int i=0; i<numberOfElements; i++)
    {
        array[i].setX(s.array[i].getX());
    }
    return *this;
}
ostream& operator<<(ostream& os, const Container& s)
{
    cout<<'[';
    for (int i=0; i<s.numberOfElements; i++)
    {
        cout << s.array[i] << ((i<s.numberOfElements -1)?",":""); ///na koniec nie ma przecinka ((i<s.array -1)?",":""
    }
    cout<<']';
    return os;
}

istream& operator>>(istream& is, Container& s)
{
    int tmp;
    for(int i=0; i<s.numberOfElements; i++)
    {
        cout<<"Podaj "<<i+1<<" element: ";
        cin>>tmp;
        s.array[i].setX(tmp);
    }
    return is;
}

Container& Container::operator++()
{
    Element* tmp = new Element[numberOfElements+1];
    for(int i=0; i<numberOfElements; i++)
    {
        tmp[i]=array[i].getX();
    }
    Element z;
    tmp[numberOfElements] = z;
    delete[] array;
    array = tmp;
    numberOfElements++;

    return *this;
}

Container Container::operator++(int)
{
    Container kopia = *this;//copy
    ++(*this);
    return kopia;
}

Container& Container::operator--()
{
    Element* tmp = new Element[numberOfElements-1];
    for(int i=0; i<numberOfElements-1; i++)
    {
        tmp[i]=array[i].getX();
    }
    delete[] array;
    array = tmp;
    numberOfElements--;

    return *this;
}

Container Container::operator--(int)
{
    Container kopia = *this;//copy
    --(*this);
    return kopia;
}

Element& Container::operator[](int i)
{
    if(i>=numberOfElements)
    {
        return array[numberOfElements-1];
    }
    if(i<=0)
    {
        return array[0];
    }
    return array[i];
}

Container& Container::operator+=(int x)
{

}

Container& Container::operator-=(int x)
{

}

bool Container::operator==(const Container& s)
{

}

Container Container::operator+(const Container& s)
{

}

void Container::reverse()
{

}

Container Container::operator!() const
{

}

Container Container::operator~() const
{

}

Container::operator int() const
{

}

Container::operator Element() const
{

}
