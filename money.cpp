#include <iostream>
#include "money.h"

using namespace std;

Money::Money(){}

Money::Money(int d, int c){
  dollars = d;
  cents = c;
}

friend std::ostream &operator<<(std::ostream &os, const Money &m){
  os << "$" << m.cents() * 0.01 << endl;
  return os;
}

friend std::ostream &operator<<(std::ostream &os, const Money &m){
  os<<
}
