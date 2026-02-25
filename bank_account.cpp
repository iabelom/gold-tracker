#include <iostream>
using namespace std;

struct Account{
    string name;
    double balance;
};

int main(){
    Account acc1 = {"Iabelom", 1000};
    cout << acc1.name << " balance: " << acc1.balance << endl;
    return 0;
}git add bank_account.cpp
git commit -m "feat: add simple bank account project setup"
git push