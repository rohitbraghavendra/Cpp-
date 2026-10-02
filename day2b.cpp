#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<a<<" "<<*b<<endl; //for my understanding, to see the address of a and value of b after swap
}

void swapRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1, y = 2;
    cout << "Before swap: x=" << x << " y=" << y << endl;
    swap(&x, &y);
    cout << "After swap:  x=" << x << " y=" << y << endl;

    int p = 3, q = 4;
    cout << "Before swapRef: p=" << p << " q=" << q << endl;
    swapRef(p, q);
    cout << "After swapRef:  p=" << p << " q=" << q << endl << endl;

    //extra part for learning reference
    int m = 10;
    int &ref = m;
    cout << "Reference value: " << ref << endl; 

    return 0;
}