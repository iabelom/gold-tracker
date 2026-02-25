#include <iostream>
using namespace std;

// Demonstrating loops in C++

int main() {

    // For loop example
    for (int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }

    return 0;
}#include <iostream>
using namespace std;

// Demonstrating loops in C++

int main() {

    // For loop example
    for (int i = 1; i <= 5; i++) {
        cout << "For Loop Count: " << i << endl;
    }

    cout << "------" << endl;

    // While loop example
    int j = 1;
    while (j <= 5) {
        cout << "While Loop Count: " << j << endl;
        j++;
    }

    return 0;
}// Do-while loop example
int k = 1;
do {
    cout << "Do-while count: " << k << endl;
    k++;
} while (k <= 5);