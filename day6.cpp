#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int n,int d) : num(n), den(d) {}

Fraction Fraction::operator+(const Fraction &other) const{
    return Fraction(num*other.den + other.num*den,den*other.den);
}

void Fraction::print() const{
    cout<<num<<"/"<<den<<endl;
}


int main() {
    Fraction a(1,2);
    Fraction b(1,3);
    Fraction c=a+b;
    c.print();
    return 0;
}

