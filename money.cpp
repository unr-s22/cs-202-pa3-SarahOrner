#include <iostream>
#include "money.h"

bool operator<(const Money &rhs) const{
  return all_cents < rhs.all_cents;
}

friend std::ostream &operator<<(std::ostream &os, const Money &money){
  os << "$" << money.all_cents * 0.01;
  return os;
}
