#include <iostream>
using namespace std;

class Fraction {
    int num, den;
public:
    Fraction(int n,int d) : num(n), den(d) {}

    Fraction operator+(const Fraction &other) const {
        return Fraction(num * other.den + other.num * den, den * other.den);
    }

    friend ostream& operator<<(ostream &os, const Fraction &f);   // declared INSIDE the class
};

// defined OUTSIDE the class, NOT a member — note: no Fraction:: prefix, and no 'friend' keyword here
ostream& operator<<(ostream &os, const Fraction &f) {   // defined OUTSIDE the class
    os << f.num << "/" << f.den;
    return os;
}

int main() {
    Fraction a(1,2), b(1,3);
    Fraction c=a+b;     // compiler translates this to: a.operator+(b)
    cout << c << endl;  // compiler translates this to: operator<<(cout, c)
}