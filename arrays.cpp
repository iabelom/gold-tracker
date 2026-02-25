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
cout << "Sum of array: " << sum << endl;int max_val = numbers[0];
int min_val = numbers[0];

for (int i = 1; i < 5; i++) {
    if (numbers[i] > max_val) max_val = numbers[i];
    if (numbers[i] < min_val) min_val = numbers[i];
}

cout << "Max: " << max_val << ", Min: " << min_val << endl;git add arrays.cpp
git commit -m "feat: add array max and min example"
git push