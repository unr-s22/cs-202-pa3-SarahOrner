#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <string>

using namespace std;

class Money{
   friend bool operator==(const Money&, const Money&);
private:
  int dollars, cents;
public:
  Money();
  Money(int dol, int cen);
};

#endif
