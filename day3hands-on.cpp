#include <iostream>
using namespace std;

class DynamicArray {
    int size;
    int* data;
public:
    DynamicArray(int s) : size(s) {
        data= new int[size];
        for (int i=0; i<size;i++) {
            data[i]=0;
        }
    }
    ~DynamicArray() {
        delete[] data;
    }

    DynamicArray(const DynamicArray& other) :size(other.size) {
        data=new int[size];
        for (int i=0; i<size;i++) {
            data[i]=other.data[i];
        }
    }

    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {           // self-assignment check
            delete[] data;              // free old memory
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; i++) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    void set(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    int get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return -1; // or throw exception
    }


};