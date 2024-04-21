#include "wzor.h"

int main()
{
 Wzor s1;
 Wzor s2('+',4); //4 oznacza dlugosc wzoru, ’+’ oznacza znak z którego powstaje wzor,

 s1.opis();//wyœwietli komunikat: 3 x ’?’
 s1.drukuj(); //wyœwietli wzor: ???
 s2.opis();//wyœwietli komunikat: 4 x ’+’
 s2.drukuj(); //wyœwietli wzor: ++++

 s1.ustaw('*',10);
 s1.opis();
 s1.drukuj();

 Wzor *s3 = new Wzor('%',6);
 s3 -> drukuj();
 s3 -> ustaw('^');
 s3 -> drukuj();

 Wzor* *tab= new Wzor*[3];
 tab[0]=&s1;
 tab[1]=&s2;
 tab[2]=s3;

delete tab[2]; ///usuwamy tylko s3 poniewaz zostalo zaalokowane za pomoca new
///s1 i s2 sa zwyklymi obiektami i same sie usuna (zmienne automatyczne zyja tylko w bloku)
delete []tab;


 //1. Utworz z alokacja dynamiczna tablice trzech wskaznikow do wczesniej utworzonych obiektow,
 //ktora przechowuje wskazniki do istniejacych oiektow s1, s2, s3.

 //2. Zwolnij zaalokowana pamiec.

 //3. Pod koniec dzialania programu wyœwietlaja siê komunikaty informujace o usunieciu obiektow.

 //4. Zwroc uwagê na kolejnosc usuwania obiektow. s3(delete), s2, s1 -> stos
 int l=0;
 char a;
 int b;
 cout<<"Podaj liczbe wzorow: "<<endl;
 cin>>l;
 Wzor* *tab1=new Wzor*[l]; // trzeba utworzyc obiekty
 ///2 sposob
 Wzor *tabWzorow=new Wzor[l];//trzeba tylko uzupelnic dane obiektow

 for(int i=0; i<l; i++)
 {
     cout<<"Podaj znak: "<<endl;
     cin>>a;
     cout<<"Podaj ilosc: "<<endl;
     cin>>b;
     tab1[i]= new Wzor(a,b); //new zwraca adres
     tabWzorow[i].ustaw(a,b);
 }
for(int i=0; i<l; i++)
 {
     tab1[i]->drukuj();
     delete tab1[i];
     /// 2 sposob: tabWzorow[i].drukuj();
 }
delete [] tab1;
delete [] tabWzorow;

 return 0;
}
