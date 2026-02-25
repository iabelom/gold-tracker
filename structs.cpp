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
}struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    string name;
    Date date;
};

Event e = {"Birthday", {25,12,2026}};
cout << e.name << " on " << e.date.day << "/" << e.date.month << "/" << e.date.year << endl;git add pointers.cpp
git commit -m "feat: add const pointer example"
git pushvoid printPerson(Person p){
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

int main(){
    Person p1 = {"Iabelom", 20};
    printPerson(p1);
    return 0;
}Person createPerson(string name, int age){
    Person p;
    p.name=name; p.age=age;
    return p;
}

int main(){
    Person p1 = createPerson("Alice",25);
    cout << p1.name << " " << p1.age << endl;
    return 0;
}Person p2 = {"Bob",30};
Person* ptr = &p2;
cout << ptr->name << " " << ptr->age << endl;Person p1={"Alice",25};
Person p2={"Bob",30};
Person people[2]={p1,p2};
for(int i=0;i<2;i++){
    cout << people[i].name << " " << people[i].age << endl;
}