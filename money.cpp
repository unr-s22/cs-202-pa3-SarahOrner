#include <iostream>
#include "money.h"

bool operator==(const Money& dol, const Money& cents)
{
    return (lhs.numerator == rhs.numerator && lhs.denominator == rhs.denominator);
}
