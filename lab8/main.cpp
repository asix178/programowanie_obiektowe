#include"zwierze.h"
#include<cstdlib>
#include<ctime>

int main()
{
   /// Zwierze z; -> nie zadziala bo nie mozna robic obiektow klasy abstrakcyjnej
    Zwierze* z = new Krowa;
    z->dajGlos();
    delete z;

    srand(time(0));
    int n;
    cout<< "?> n = ";
    cin>>n;
    Zwierze* *zoo = new Zwierze*[n];///!!! Zwierze* -> nie mozna utworzyc obiektu klasy Zwierze
    int los;
    for(int i = 0; i<n; i++)
    {
        los = rand() % 6;
        switch (los)
        {
            case(0): zoo[i] = new Pies; break;
            case(1): zoo[i] = new Waz; break;
            case(2): zoo[i] = new Lis; break;
            case(3): zoo[i] = new Owca; break;
            case(4): zoo[i] = new Krowa; break;
            case(5): zoo[i] = new Zaba; break;
        }
    }
    for (int i = 0; i<n; i++)
    {
        zoo[i] -> dajGlos();
        cout<<endl;
        delete zoo[i];
    }
    return 0;
}
