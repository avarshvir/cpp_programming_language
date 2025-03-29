#include<iostream>
using namespace std;
int a = 10;   // global variable
int fun(){
    int a = 5;
    cout << a << endl;
    cout << ::a << endl;
}
int main(){
    fun();
    cout << a;
}