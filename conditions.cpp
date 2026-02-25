#include <iostream>
using namespace std;

// User input and conditions

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }

    if (number > 0) {
        cout << "Number is positive" << endl;
    } else if (number < 0) {
        cout << "Number is negative" << endl;
    } else {
        cout << "Number is zero" << endl;
    }

    return 0;
}#include <iostream>
using namespace std;

// Demonstrating if-else conditions with user input

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

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