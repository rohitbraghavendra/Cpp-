#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    const int N=100000;

    vector<int> v;
    auto start= high_resolution_clock::now();
    for (int i=0;i<N;i++) v.insert(v.begin(), i);
    auto end= high_resolution_clock::now();
    cout<<"vector front-insert: "<<duration_cast<milliseconds>(end-start).count() << "ms" <<endl;

    list<int> l;
    start = high_resolution_clock::now();
    for (int i = 0; i < N; i++) l.push_front(i);
    end = high_resolution_clock::now();
    cout << "list front-insert: " << duration_cast<milliseconds>(end - start).count() << "ms" << endl;

    deque<int> dq;
    start = high_resolution_clock::now();
    for (int i = 0; i < N; i++) dq.push_front(i);
    end = high_resolution_clock::now();
    cout << "deque front-insert: " << duration_cast<milliseconds>(end - start).count() << "ms" << endl;

    return 0;
}