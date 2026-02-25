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
}#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 3);
    cout << "5 * 3 = " << result << endl;
    return 0;
}#include <iostream>
using namespace std;

string greet(string name) {
    return "Hello, " + name;
}

int main() {
    cout << greet("Iabelom") << endl;
    return 0;
}#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int sum_of_squares(int a, int b) {
    return square(a) + square(b);
}

int main() {
    cout << "Sum of squares: " << sum_of_squares(2, 3) << endl;
    return 0;
}#include <iostream>
using namespace std;

int sum(int a, int b){ return a+b; }
double sum(double a, double b){ return a+b; }

int main(){
    cout << sum(2,3) << endl;
    cout << sum(2.5,3.5) << endl;
    return 0;
}