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
}int multiply(int a, int b=2){
    return a*b;
}

int main(){
    cout << multiply(5) << endl; // Uses default b=2
    cout << multiply(5,3) << endl;
    return 0;
}int factorial(int n){
    if(n<=1) return 1;
    else return n*factorial(n-1);
}

int main(){
    cout << "Factorial of 5: " << factorial(5) << endl;
    return 0;
}git add functions.cpp
git commit -m "feat: add recursive factorial function"
git pushint* getArray(){
    static int arr[3] = {1,2,3};
    return arr;
}

int main(){
    int* a = getArray();
    for(int i=0;i<3;i++) cout << a[i] << endl;
    return 0;
}// This is a practice for 2D array sum
// Loop through array
// Print values