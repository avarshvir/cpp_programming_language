#include<iostream>
using namespace std;
int fun(){
    int a = 5;   // local variable
    cout << a ;
}
int a = 7;  // global variable
int main(){
    int a = 6;
    cout << "a = 6 variable "<< a << endl;
    cout << "global variable "<< ::a << endl;
    fun();
}