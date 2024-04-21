#include"planeta.h"
#include <conio.h>
#include <windows.h>
void set_cursor (int x = 0 , int y = 0); // buforowanie -> znikniecie migania
void ShowConsoleCursor(bool showFlag); //schowanie kursora
int main()
{
    Plaszczak teodor(char(1));
    Plaszczak teodozja(char(2));
    Jablko jablko(char('*'));
    Planeta Rect001(50,50,&teodor,&teodozja,&jablko);
    char znak;
    int znak2;

    cout<<endl<<"PRZYGODY TEODORA I TEODOZJI"<<endl;
    cout<<"Aby rozpoczac kliknij klawisz T"<<endl;
    do
    {
        znak = getch();
    }
    while(znak!= 't'&& znak!= 'T');

    system("cls");

    Rect001.drukuj();
//    teodor.ruchPrawo();
//    Rect001.drukuj();
//    teodor.ruchGora();
//    Rect001.drukuj();
    do
    {
        znak = getch();
        switch(znak)
        {
            case 'w': teodor.ruchGora(); break;
            case 's': teodor.ruchDol(); break;
            case 'a': teodor.ruchLewo(); break;
            case 'd': teodor.ruchPrawo(); break;
            case 'W': teodor.ruchGora(); break;
            case 'S': teodor.ruchDol(); break;
            case 'A': teodor.ruchLewo(); break;
            case 'D': teodor.ruchPrawo(); break;
            case char(224):
                {
                   switch(znak2=getch())
                   {
                        case 72: teodozja.ruchGora(); break;
                        case 80: teodozja.ruchDol(); break;
                        case 75: teodozja.ruchLewo(); break;
                        case 77: teodozja.ruchPrawo(); break;
                    }
                }

        }
        if (Rect001.getCzyKoniec1()==0 && Rect001.getCzyKoniec2()==0)
        {
            set_cursor();
            ShowConsoleCursor(false);
            Rect001.ruch();
            Rect001.drukuj();
        }
        else{znak=char(27);}

    }
    while (znak!=char(27)); //esc

    system("cls");

    if(Rect001.getCzyKoniec1()==1)
    {
        cout<<endl<<endl<<"!!!!!!!!!!!!!!!TEODOR WINS!!!!!!!!!!!!!!!"<<endl<<"!!!!!!!!!!!!!!!TEODOR WINS!!!!!!!!!!!!!!!"<<endl<<"!!!!!!!!!!!!!!!TEODOR WINS!!!!!!!!!!!!!!!"<<endl;
    }
    if(Rect001.getCzyKoniec2()==1)
    {
        cout<<endl<<endl<<"!!!!!!!!!!!!!!!TEODOZJA WINS!!!!!!!!!!!!!!!"<<endl<<"!!!!!!!!!!!!!!!TEODOZJA WINS!!!!!!!!!!!!!!!"<<endl<<"!!!!!!!!!!!!!!!TEODOZJA WINS!!!!!!!!!!!!!!!"<<endl;
    }

/// struktura COORD sterowanie kursorem - podwojne  buforowanie i znikniecie kursora
    do
    {
        znak = getch();
    }
    while(znak!=char(27));
    return 0;
}
void set_cursor(int x, int y)
{
    HANDLE handle;
    COORD coordinates;
    handle = GetStdHandle(STD_OUTPUT_HANDLE);
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition ( handle , coordinates );
}
void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
