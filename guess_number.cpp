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
else cout << "Correct!\n";while(num != guess){
    cout << "Guess again: ";
    cin >> num;
    if(num>guess) cout << "Too high!\n";
    else if(num<guess) cout << "Too low!\n";
    else cout << "Correct!\n";
}#include <iostream>
using namespace std;

int main(){
    int secret=5, guess;
    char cont='y';
    while(cont=='y'){
        cout << "Guess the number: ";
        cin >> guess;
        if(guess>secret) cout << "Too high\n";
        else if(guess<secret) cout << "Too low\n";
        else cout << "Correct!\n";
        cout << "Play again? (y/n): ";
        cin >> cont;
    }
    return 0;
}