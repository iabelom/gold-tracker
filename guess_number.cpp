#include <iostream>
using namespace std;

int main(){
    int guess = 5;
    int num;
    cout << "Guess the number: ";
    cin >> num;
    if(num==guess) cout << "Correct!\n";
    else cout << "Try again!\n";
    return 0;
}