#include<iostream>
using namespace std;
int main(){
    int *ptr;                        // Declaration of a pointer to int
    int value = 5;
    ptr = &value;                   // Initialization: ptr now holds the address of value
    cout << ptr << endl;
    cout << &value << endl;

    cout << *ptr << endl;           // Outputs: 5
    cout << value << endl;
}