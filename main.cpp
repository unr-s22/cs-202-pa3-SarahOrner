#include <iostream>
#include "account.h"
#include "money.h"

using namespace std;

int main(){
    Money starting = Money (300,23);
    Account myAccount = Account (starting);
    myAccount.makeDeposit(Money(200,0));
    myAccount.makeDeposit(Money(300,24));
    myAccount.makeDeposit(Money(501,22));

    cout<<myAccount<<endl;

    myAccount.makeWithdrawals(Money(300,10));
    myAccount.makeWithdrawals(Money(201,34));

    cout<<myAccount<<endl;

    Money m(300,10);
    Money n(100,10);

    if(m>n){
        cout<<"Account m has more money than Account n" <<endl;
    }else if(n>m){
        cout<<"Account n has more money than Account m"<<endl;
    }else{
        cout<<"Account m and Account n have the same amount of money"<<endl;
    }

    return 0;
}