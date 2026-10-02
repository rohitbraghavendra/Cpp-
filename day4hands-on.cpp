#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;
public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}

    Fraction operator+(const Fraction &other) const {
        return Fraction(numerator*other.denominator + other.numerator*denominator,denominator*other.denominator);
    }

    bool operator==(const Fraction &other) const {
        return numerator*other.denominator==other.numerator*denominator;
    }

    friend ostream& operator<<(ostream &os, const Fraction &f);   // declared INSIDE the class
};

ostream& operator<<(ostream &os, const Fraction &f) {
    os<<f.numerator<<"/"<<f.denominator;
    return os;
}

int main() {
    Fraction a(1,2), b(1,3);

    Fraction c=a+b; 
    cout<<a<<" + "<<b<<" = "<<c<<endl;

    Fraction d(3,4);
    cout<< (a==d ? "a equals d" : "a doesn't equal d")<<endl;

    return 0;
}