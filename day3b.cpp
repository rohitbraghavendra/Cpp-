#include <iostream>
using namespace std;

class Student {
    string name;
    static int totalStudents; // declaration only-one copy shared by ALL Student objects
public:
    Student(string n) : name(n) {
        totalStudents++;      // every constructor call increments the SHARED counter
    }
    static int getTotalStudents() { 
        return totalStudents;  // static member function can access static data members
    }
};

int Student::totalStudents=0;  //MUST define/initialize it once, outside the class

int main() {
    Student s1("Rohit");
    Student s2("Amit");
    cout << "Total students: " << Student::getTotalStudents() << endl;  // call static member function using class name
}
