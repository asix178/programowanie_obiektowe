#ifndef CONTAINER_H

#define CONTAINER_H
#include<iostream>
using namespace std;

class Element
{
	int x;
 public:
	Element(int x = 0);
    int getX();
    void setX(int x);
    friend ostream& operator<<(ostream& os, const Element& e);
    friend istream& operator>>(istream& is, Element& e);
};

class Container
{
    Element* array;
    int numberOfElements;
 public:
    Container(int numberOfElements = 0);
    Container(const Container& s);
    ~Container();
    Container& operator=(const Container& s);
    friend ostream& operator<<(ostream& os, const Container& s);
    friend istream& operator>>(istream& is, Container& s);
    Container& operator++();
    Container operator++(int);
    Container& operator--();
    Container operator--(int);
    Element& operator[](int i);
    Container& operator+=(int x);
    Container& operator-=(int x);
    bool operator==(const Container& s);
    Container operator+(const Container& s);
    void reverse();
    Container operator!() const; //np. zeruje wszystko
    Container operator~() const; //np. neguje
    operator int() const;
    operator Element() const;
};

#endif
