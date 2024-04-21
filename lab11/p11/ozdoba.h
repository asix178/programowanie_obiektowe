#ifndef OZDOBA
#define OZDOBA

#include <iostream>
using namespace std;

class Ozdoba
{
    char z;
public:
    Ozdoba(int z = '^') : z(z) {}
    virtual ~Ozdoba() = default; ///klasa nie jest abstrakcyjna bo destruktor nie wirtualny
    virtual void print(ostream& os) const{os << z;}
};

class Bombka : public Ozdoba
{
  public:
      Bombka() : Ozdoba('o') {}
      ~Bombka() {cout<<"~o";}
};

class Cukierek : public Ozdoba
{
  public:
      Cukierek() : Ozdoba('&') {}
      ~Cukierek() {cout<<"~&";}
};

class Lampka : public Ozdoba
{
  public:
      Lampka() : Ozdoba('*') {}
      ~Lampka() {cout<<"~*";}
};


#endif // OZDOBA
