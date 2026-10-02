#include <iostream>
using namespace std;


class Student {
    string name;
    int marks;
public:
    // Version B: member initializer list
    Student(string n, int m) : name(n), marks(m) {}
};

class Config {
    const int maxUsers;
    int &counterRef;
public:
    Config(int m, int &c) : maxUsers(m), counterRef(c) {}
    // Config(int m, int &c) { maxUsers = m; ... } would NOT compile
};

//int main() {
//cout << Student("Temp", 0).getMarks() << endl;  //no name, exists only for this one expression, and is destroyed at the end of the full expression (right after the ;)
//}

class Buffer {
    int* data;
    int size;
public:
    Buffer(int s) : size(s) {
        data = new int[size];
    }

    // 1. Destructor: cleans up the dynamically allocated memory
    ~Buffer() {
        delete[] data;
    }

    // 2. Copy constructor: performs a deep copy of the buffer
    Buffer(const Buffer &other) : size(other.size) {
        data = new int[size];           // allocate OUR OWN memory
        for (int i=0; i<size; i++) {
            data[i]= other.data[i];     // copy the VALUES, not the pointter
        }
    }

    // 3. Copy assignment operator: performs a deep copy of the buffer, with a twist
    Buffer& operator=(const Buffer &other) {
        if (this==&other) return *this;     // guard against self-assignment (a=a;)
        delete[] data;                      // free our OLD memory first
        size=other.size;
        data=new int[size];
        for (int i=0;i<size;i++) {
            data[i]=other.data[i];
        }
        return *this;                       // must return *this to allow chaining (a=b=c;)
    }

};  

int main() {
    Buffer a(5); // creates a Buffer with size 5
    Buffer b=a;  // COPY CONSTRUCTOR -  b doesn't exist yet, it's being created from a
    Buffer c(10);
    c=a;         // COPY ASSIGNMENT - c already exists, its old contents are replaced with a's contents

}                // a, b, and c's destructors run here
