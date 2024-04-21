#ifndef PUNKT
#define PUNKT
#include <iostream>
using namespace std;

class Punkt{
private:
    int x,y;
public:
    Punkt(int x = 0, int y = 0) :x(x), y(y){};
    ~Punkt() = default;
    int getX() {return x;}
    int getY() {return y;}
    void setX(int x){this->x = x;}
    void setY(int y){this->y = y;}
};

#endif // PUNKT



