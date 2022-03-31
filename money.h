#include <iostream>
#include <string>

#ifndef MONEY_H
#define MONEY_H

using namespace std;

class Money{

private:
  int dollars;
  int cents;

public:
  Money();
  Money(int d, int c);

  Money operator+ (const Money &m){
    Money totalMoney;
    totalMoney.dollars = dollars + m.dollars;
    totalMoney.cents = cents + m.cents;
    return totalMoney;
  }

  Money operator- (const Money &m){
    Money totalMoney;
    totalMoney.dollars = dollars - m.dollars;
    totalMoney.cents = cents - m.cents;
    return totalMoney;
  }

  bool operator> (const Money &m){
    if (dollars>m.dollars){
        return true;
    }else if(dollars == m.dollars && cents > m.cents){
        return true;
    }else{
        return false;
    }
  }

  bool operator< (const Money &m){
    if (dollars<m.dollars){
        return true;
    }else if(dollars == m.dollars && cents < m.cents){
        return true;
    }else{
        return false;
    }
  }

  bool operator>= (const Money &m){
    if (dollars>=m.dollars){
        return true;
    }else if(dollars == m.dollars && cents >= m.cents){
        return true;
    }else{
        return false;
    }
  }

  bool operator<= (const Money &m){
    if (dollars<=m.dollars){
        return true;
    }else if(dollars == m.dollars && cents <= m.cents){
        return true;
    }else{
        return false;
    }
  }

  bool operator== (const Money &m){
    if (dollars==m.dollars && cents==m.cents){
        return true;
    }else{
        return false;
    }
  }

  bool operator!= (const Money &m){
    if (dollars!=m.dollars && cents!=m.cents){
        return true;
    }else{
        return false;
    }
  }

  friend ostream & operator << (ostream &out, const Money &m);
  friend istream & operator >> (istream &in, Money &m);
};

#endif
