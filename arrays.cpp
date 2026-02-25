#include <iostream>
using namespace std;

// Array example in C++

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << "Number: " << numbers[i] << endl;
    }

    return 0;
}int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += numbers[i];
}
cout << "Sum of array: " << sum << endl;