#include <iostream>
using namespace std;

class Animal {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Dog : public Animal {     // Dog inherits everything Animal has
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.breathe();  // Dog gets this for free from Animal — never wrote it itself
    d.bark();     // this one is Dog's own addition
}