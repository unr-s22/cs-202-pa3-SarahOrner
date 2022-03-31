#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <string>

using namespace std;

class Money{
  friend bool operator==(const Money &lhs, const Money &rhs);
private:
  int dollars, all_cents;
public:
  Money();
  Money(int dol, int cen);
};

#endif
