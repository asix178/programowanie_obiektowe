#ifndef FIGURESTACK
#define FIGURESTACK

#include "figure.h"

class Node
{
    Figure* ptr;
    Node* next;
public:
    Node(Figure* ptr, Node* next);
    Figure* getPtr();
    Node* getNext();
};

class StackFigure
{
    Node* top;
public:
    StackFigure() {top = nullptr;}
    ~StackFigure();
    void push(Figure* ptr);
    Figure* pop();
    friend ostream& operator<<{ostream &os, const StackFigure& st};
};


Node::Node(Figure* ptr, Node* next)
{
    this -> ptr = ptr;
    this -> next = next;
}

Figure* Node::getPtr()
{
    return ptr;
}

Node* Node::getNext()
{
    return next;
}

ostream& operator<<{ostream &os, const StackFigure& st}
{
    Node* biegacz = st.top;
    while(biegacz != nullptr)
    {
        biegacz -> getPtr() -> paint();
        os<<endl;
        biegacz = biegacz -> getNext();
    }
    return os;
}

StackFigure::~StackFigure()
{
    while (top != nullptr)
    {
        Node* tmp = top;
        top = top ->getNext();
        delete tmp -> getPtr();
        delete tmp;
    }
}

void StackFigure::push(Figure* ptr)
{
    Node* nowy = new Node(ptr, top);
    top = npwy;
}

Figure* StackFigure::pop()
{
    if(top == nullptr)
    {
        return nullptr;
    }
    Figure* gora = top -> getPtr();
    Node* tmp = top;
    top = top ->getNext();
    delete tmp;

    return gora;
}


#endif // FIGURESTACK
