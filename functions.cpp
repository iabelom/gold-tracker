#include <iostream>
using namespace std;

// Function with return value

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 3);
    cout << "5 + 3 = " << sum << endl;
    return 0;
}