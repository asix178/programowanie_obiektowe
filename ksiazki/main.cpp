#include"czytelnik.h"

int main()
{
    Powiesc p1(1,"Hubert","Tytul1","przygodowa");
    Naukowa n1(2,"Naukowiec","Wazne","biologia");
    Historyczna h1 (3,"Homer","Dzieje","Nieznany");

    Czytelnik cz1(1,"Adam","Nowak");
    cz1.wypozycz(&p1);
    cz1.wypozycz(&n1);
    cz1.wypozycz(&h1);

    cout<<cz1;

    cz1-=1;

    cout<<cz1;

    cz1.usunNaukowe();

    cout<<cz1;

    return 0;
}
