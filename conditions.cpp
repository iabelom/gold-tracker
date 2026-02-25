#include <iostream>
using namespace std;

// Demonstrating if-else conditions

int main() {

    int number = 10;

    if (number > 0) {
        cout << "Number is positive" << endl;
    } 
    else if (number < 0) {
        cout << "Number is negative" << endl;
    } 
    else {
        cout << "Number is zero" << endl;
    }

    return 0;
}