git add temperature_converter.cpp
git commit -m "feat: improve temperature converter menu"
git push#include <iostream>
using namespace std;

int main() {
    int choice, a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "1) Add 2) Subtract\nChoice: ";
    cin >> choice;
    if(choice==1) cout << a+b << endl;
    else cout << a-b << endl;
    return 0;
}cout << "3) Multiply 4) Divide\nChoice: ";
cin >> choice;
if(choice==3) cout << a*b << endl;
else if(choice==4) cout << a/b << endl;while(true){
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "1)Add 2)Sub 3)Mul 4)Div 0)Exit: ";
    cin >> choice;
    if(choice==0) break;
    else if(choice==1) cout << a+b << endl;
    else if(choice==2) cout << a-b << endl;
    else if(choice==3) cout << a*b << endl;
    else if(choice==4) cout << a/b << endl;
}