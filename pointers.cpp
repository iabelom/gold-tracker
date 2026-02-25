#include <iostream>
using namespace std;

// Pointer example in C++

int main() {
    int number = 42;
    int* ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Pointer address: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;

    return 0;
}git add structs.cpp
git commit -m "feat: add basic struct example"
git pushint nums[3] = {10, 20, 30};
int* p = nums;

for (int i = 0; i < 3; i++) {
    cout << "Value: " << *(p + i) << endl;
}git add pointers.cpp
git commit -m "feat: add pointer arithmetic example"
git push#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    int** pp = &p;

    cout << "Value of a: " << a << endl;
    cout << "Value via pointer: " << *p << endl;
    cout << "Value via pointer to pointer: " << **pp << endl;

    return 0;
}git add pointers.cpp
git commit -m "feat: add pointer to pointer example"
git pushint* arr = new int[3];
arr[0]=1; arr[1]=2; arr[2]=3;

for(int i=0;i<3;i++) cout << arr[i] << endl;

delete[] arr; // free memoryint x=5, y=10;
int *px=&x, *py=&y;

int temp = *px;
*px = *py;
*py = temp;

cout << "x: " << x << ", y: " << y << endl;