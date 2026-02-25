#include <iostream>
using namespace std;

int main(){
    float c;
    cout << "Enter Celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << (c*9/5)+32 << endl;
    return 0;
}float f;
cout << "Enter Fahrenheit: ";
cin >> f;
cout << "Celsius: " << (f-32)*5/9 << endl;char cont='y';
while(cont=='y'){
    cout << "Enter Celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << (c*9/5)+32 << endl;
    cout << "Another conversion? (y/n): ";
    cin >> cont;
}char choice;
do{
    float temp;
    cout << "Enter 1) Celsius to Fahrenheit 2) Fahrenheit to Celsius: ";
    cin >> choice;
    if(choice=='1'){
        cout << "Celsius: ";
        cin >> temp;
        cout << "Fahrenheit: " << (temp*9/5)+32 << endl;
    } else if(choice=='2'){
        cout << "Fahrenheit: ";
        cin >> temp;
        cout << "Celsius: " << (temp-32)*5/9 << endl;
    }
    cout << "Another conversion? (y/n): ";
    cin >> choice;
} while(choice=='y');