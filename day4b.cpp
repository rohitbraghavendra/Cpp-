#include <iostream>
using namespace std;

class Fraction {
    int num, den;
public:
    Fraction(int n, int d) : num(n), den(d) {}

    bool operator==(const Fraction &other) const{
        // cross-multiply to compare without needing a common denominator
        return num*other.den==other.num*den;
    }
};

int main() {
    Fraction a(1,2);
    Fraction b(2,4);
    if (a==b) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }
}