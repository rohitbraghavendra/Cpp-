#include <iostream>
using namespace std;

int main() {
    int a=1;
    short b=2;
    long c=3;
    long long d=4;
    float e=5.6;
    double f=6.6;
    char g='x';
    bool h=true;

    cout<< "          --:bytes:--" <<endl;
    cout << "int:        size=" <<sizeof(a)<<" address="<<&a<<endl;
    cout << "short:      size=" <<sizeof(b)<<" address="<<&b<<endl; 
    cout << "long:       size=" <<sizeof(c)<<" address="<<&c<<endl;
    cout << "long long:  size=" <<sizeof(d)<<" address="<<&d<<endl;
    cout << "float:      size=" <<sizeof(e)<<" address="<<&e<<endl;
    cout << "double:     size=" <<sizeof(f)<<" address="<<&f<<endl;
    cout << "char:       size=" <<sizeof(g)<<" address="<<(void*)&g<<endl;
    cout << "bool:       size=" <<sizeof(h)<<" address="<<(void*)&h<<endl;

    return 0;
}