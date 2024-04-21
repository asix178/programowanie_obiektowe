#ifndef PLANETA_H
#define PLANETA_H
#include "jablko.h"
#include"plaszczak.h"
#include<stdlib.h>
#include <time.h>

class Planeta
{
    int szer;
    int wys;
    Plaszczak* wskp; //wskaznik do plaszczaka - istniejacego
    Plaszczak* wskp2;
    Jablko* jeden;
    bool czyKoniec1=false;
    bool czyKoniec2=false;

public:
    Planeta(int szer, int wys, Plaszczak* wskp,Plaszczak* wskp2,Jablko* jeden);
    void drukuj() const;
    void ruch();///pilnowanie ruchu -> co z wejsciem w sciane
    bool getCzyKoniec1()const {return czyKoniec1;}
    bool getCzyKoniec2()const {return czyKoniec2;}
};
Planeta::Planeta(int szer, int wys, Plaszczak* wskp, Plaszczak* wskp2,Jablko* jeden)
{
    this -> szer = szer;
    this -> wys = wys;
    this -> wskp = wskp;
    wskp -> setx(1);
    wskp -> sety(1);
    this -> wskp2 = wskp2;
    wskp2 -> setx(szer-2);
    wskp2 -> sety(wys-2);
    srand (time(NULL));
    this -> jeden = jeden;
    jeden->setx_jablko(2+(rand()%(szer-4)));
    jeden->sety_jablko(2+(rand()%(wys-4)));
}
void Planeta::drukuj() const
{
    for(int i=0; i<wys;i++)
    {
        for(int j=0; j<szer; j++)
        {
            if(i==0 || i==wys-1 || j==0 || j==szer-1)
            {
                cout<<"#";
            }
            else if(i==jeden->gety_jablko() && j==jeden->getx_jablko())
            {
                jeden->drukuj_jablko();
            }
            else if(i==wskp->gety() && j==wskp->getx())
            {
                wskp->drukuj();
            }
            else if(i==wskp2->gety() && j==wskp2->getx())
            {
                wskp2->drukuj();
            }

            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Planeta::ruch()
{
    if(wskp->getx()==0)
    {
        wskp->setx(1);
    }
    if(wskp->getx()== szer-1)
    {
        wskp->setx(szer-2);
    }
    if(wskp->gety()==0)
    {
        wskp->sety(1);
    }
    if(wskp->gety()== wys-1)
    {
        wskp->sety(wys-2);
    }
    if(wskp2->getx()==0)
    {
        wskp2->setx(1);
    }
    if(wskp2->getx()== szer-1)
    {
        wskp2->setx(szer-2);
    }
    if(wskp2->gety()==0)
    {
        wskp2->sety(1);
    }
    if(wskp2->gety()== wys-1)
    {
        wskp2->sety(wys-2);
    }
     if(wskp->getx()==jeden->getx_jablko() && wskp->gety()==jeden->gety_jablko())
    {
        czyKoniec1=true;
    }
    if(wskp2->getx()==jeden->getx_jablko() && wskp2->gety()==jeden->gety_jablko())
    {
        czyKoniec2=true;
    }
}


#endif // PLANETA_H
