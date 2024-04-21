#include "figure.h"
#include"figurestack.h"

int main()
{
    FigureStack s;
    s.push(new Square);
    s.push(new Triangle);
    s.push(new Circle);
    s.push(new Circle);
    cout << s << endl;
    Figure* ptrF = s.pop();
    delete ptrF;
    cout << s << endl;

    return 0;
}
