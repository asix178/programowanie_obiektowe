#include "cw_wzor.h"

int main()
{
 Wzor s1;
 Wzor s2('+',4); //4 oznacza dlugosc wzoru, ’+’ oznacza znak z którego powstaje wzor,

 s1.opis();//wyœwietli komunikat: 3 x ’?’
 s1.drukuj(); //wyœwietli wzor: ???
 s2.opis();//wyœwietli komunikat: 4 x ’+’
 s2.drukuj(); //wyœwietli wzor: ++++

 s1.SetWzor('*',10);
 s1.opis();
 s1.drukuj();

 Wzor *s3 = new Wzor('%',6);
 s3 -> drukuj();
 s3 -> SetZnak('^');
 s3 -> drukuj();

 //1. Utworz z alokacja dynamiczna tablice trzech wskaznikow do wczesniej utworzonych obiektow,
 //ktora przechowuje wskazniki do istniejacych oiektow s1, s2, s3.

 Tab* *Wzor[3];
 Tab[0] = &s1;
 Tab[1] = &s2;
 Tab[2] = s3;


 //2. Zwolnij zaalokowana pamiec.

 delete Tab[2];

 delete []Tab;

 //3. Pod koniec dzia³ania programu wyœwietlaja siê komunikaty informujace o usunieciu obiektow.

 //4. Zwroc uwagê na kolejnosc usuwania obiektow.

 return 0;
}
