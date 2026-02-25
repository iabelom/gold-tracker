#include <iostream>
using namespace std;

// Pointer example in C++

int main() {
    int number = 42;
    int* ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;

    return 0;
}