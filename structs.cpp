git add pointers.cpp
git commit -m "feat: add pointer to array example"
git push#include <iostream>
using namespace std;

// Struct example in C++

struct Person {
    string name;
    int age;
};

int main() {
    Person p;
    p.name = "Iabelom";
    p.age = 20;

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;

    return 0;
}Person people[2] = {{"Alice", 25}, {"Bob", 30}};
for (int i = 0; i < 2; i++) {
    cout << "Name: " << people[i].name << ", Age: " << people[i].age << endl;
}