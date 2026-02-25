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
}if(num>guess) cout << "Too high!\n";
else if(num<guess) cout << "Too low!\n";
else cout << "Correct!\n";