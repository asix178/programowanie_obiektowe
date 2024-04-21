#include "student.h"

int main()
{
    ///wskaznik do obiektu
    Student *s1 = new Student("Ala","Kot");
    s1->wydruk();
    delete s1;

/// tablica 3-elementowa zwyklych obiektow

    Student tab[3]; //tworza sie studenci w tablicy z konstruktora bezparametrowego
    tab[0].setImie("Piotrek");
    tab[1].setImie("Andrzej");
    tab[2].setImie("Zdzisiek");

/// 3-el dynamiczna tablica zwyklych obiektow
    Student *tab1= new Student[3];
    tab1[0].setImie("Adam");
    tab1[1].setImie("Krzysiek");
    tab1[2].setImie("Robert");

    delete[] tab1;

///dynamiczna tablica przechowujaca 3 wskazniki do obiektow

    Student s;

    Student**tab2= new Student*[3]; //Student* <- tablica przechowujaca wskazniki

    tab2[0]= new Student("Iza");
    tab2[1]= &s;///& zwraca adres do obiektu
    tab2[2]= new Student("Ola");

    tab2[0]->wydruk(); ///strzalka bo wskazniki
    tab2[1]->wydruk();
    tab2[2]->wydruk();

    delete tab2[0];
    delete tab2[2];
    delete [] tab2;

//    //Student s1; //UWAGA: bez ()!
//    Student s2("Jan","Kowalski",5,4.34f,true);//wywolanie w sposob niejawny
//    //Student s2= Student ("Jan","Kowalski",5,4.34f,true); <- jawny
//    Student s3("Ela","Lis",5,4.04f);
//    Student s4("Jan","Dzik",3);
//    Student s5("Ala","Kot");
//    Student s6("Jozef");
//    s1.wydruk();
//    s2.wydruk();
//    s3.wydruk();
//    s4.wydruk();
//    s5.wydruk();
//    s6.wydruk();
//
//    s2.setCzyZdaje(false);
//    cout<<"zmiana: "<<endl;
//    s2.wydruk();

    return 0;
}
//F2, shift + F2 -> zmiana widoku
//ctrl+shift+N -> nowy plik
//ctrl+d -> kopiowanie lini
//ctrl+shift+c->komentowanie lini
//F9->uruchomienie programu
