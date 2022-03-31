#include <iostream>
#include "account.h"

using namespace std;

int main(){
    Money starting = Money (300,23);
    Account myAccount = Account (starting); //i think
    myAccount.makeDeposit(Money(200,0));
    myAccount.makeDeposit(Money(300,24));
    myAccount.makeDeposit(Money(501,22));

    cout<<myAccount<<endl;

    myAccount.makeWithdrawals(Money(300,10));
    myAccount.makeWithdrawals(Money(201,34));

    cout<<myAccount<<endl;

    m(300.10,00) //cents

    //constructor for money object -- friend constructor and variable

    //Write code to verify that your relational operators are working correctly. This is up to you, however, you must have printouts to the console showing that the operations are correct.

    /*Money m(100,10);
    Money n(100,10);
    if(m > n){
        // print something
    } else // etc.*/

    return 0;
}