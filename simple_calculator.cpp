#include <iostream>
using namespace std;

// Simple calculator

int main() {
    int a = 5, b = 3;

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << endl;

    return 0;
}#include <iostream>
using namespace std;

// Simple calculator with user input

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << endl;

    return 0;
}