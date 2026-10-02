#include <iostream>
using namespace std;


void addOne(int &x) {
    x = x + 1;
}

void multiplyByTwo(int &x) {
    x = x * 2;
}



void byValue(int x) { x = 100; }           // x is a COPY — caller's variable unaffected
void byRef(int &x) { x = 100; }            // x IS the caller's variable — gets modified
void byConstRef(const int &x) { /* x = 100; would fail to compile */ }
void byPointer(int *x) { *x = 100; }       // caller's variable modified via dereference



int main() {
    int num = 5;
    addOne(num);              // no & needed at the call site — clean syntax
    cout << num << endl;      // 6

    int num2 = 7;
    multiplyByTwo(num2);      // no & needed at the call site — clean syntax
    cout << num2 << endl;     // 14


    int x = 10;
    int* p = &x;
    cout << p << endl;   // prints 0x7ffee  (the address stored in p)
    cout << *p << endl;  // prints 10       (the value at that address)

    int* p2 = nullptr;
    if (p2 == nullptr) {
        cout << "p2 doesn't point to anything yet" << endl;
    }
    return 0;
}
