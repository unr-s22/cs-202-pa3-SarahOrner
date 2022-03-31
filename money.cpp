#include <iostream>
#include "money.h"

using namespace std;

Money::Money(){}

Money::Money(int d, int c){
  dollars = d;
  cents = c;
}

std::ostream &operator<<(std::ostream &os, const Money &m){
  os << "$" << m << endl;
  return os;
}
