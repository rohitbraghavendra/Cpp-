#include "day6hands-on-other.h"
#include <iostream>
using namespace std;

Fraction::Fraction(int n,int d) : num(n), den(d) {}

Fraction Fraction::operator+(const Fraction &other) const{
    return Fraction(num*other.den + other.num*den,den*other.den);
}

bool Fraction::operator==(const Fraction &other) const{
    return num*other.den==other.num*den;
}

ostream& operator<<(ostream &os, const Fraction &s) {
    os<<s.num<<"/"<<s.den;
    return os;
}


int main() {
     Fraction a(1, 2);
    Fraction b(1, 3);

    Fraction c = a + b;
    cout << a << " + " << b << " = " << c << endl;

    Fraction d(2, 4);
    cout<< (a==d ? "a equals d" : "a doesn't equal d") << endl;

    return 0;
}
