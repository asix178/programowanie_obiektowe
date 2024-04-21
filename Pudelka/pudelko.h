#ifndef PUDELKO
#define PUDELKO

#include <iostream>

using namespace std;

class Pudelko{
private:
    bool czyPuste;
public:
    Pudelko(bool czyPuste) : czyPuste(czyPuste){};
    virtual ~Pudelko(){};
    bool getCzyPuste(){return czyPuste;}
    virtual char getZnak() = 0;
};

class A : public Pudelko{
public:
    A(bool czyPuste) : Pudelko(czyPuste){};
    ~A(){
        cout<<"Usuwam A -";
        if(getCzyPuste()){
            cout<<" puste"<<endl;
        }
        else{
            cout<<" niepuste"<<endl;
        }
    };
    char getZnak(){return 'A';}
};

class B : public Pudelko{
private:
    string kolor;
public:
    B(bool czyPuste, string kolor) : Pudelko(czyPuste), kolor(kolor){};
    ~B(){
        cout<<"Usuwam B -";
        if(getCzyPuste()){
            cout<<" puste"<<endl;
        }
        else{
            cout<<" niepuste"<<endl;
        }
    };
    char getZnak(){return 'B';}
};

class C : public Pudelko{
public:
     C(bool czyPuste) : Pudelko(czyPuste){};
    ~C(){
        cout<<"Usuwam C -";
        if(getCzyPuste()){
            cout<<" puste"<<endl;
        }
        else{
            cout<<" niepuste"<<endl;
        }
    };
    char getZnak(){return 'C';}
};


#endif // PUDELKO
