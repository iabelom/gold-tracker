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
git pushcout << "Balance check: " << acc1.balance << endl;
cout << "Balance check: " << acc1.balance << endl;Account acc2 = {"Alice",500};
Account accounts[2] = {acc1, acc2};
for(int i=0;i<2;i++) cout << accounts[i].name << " has " << accounts[i].balance << endl;