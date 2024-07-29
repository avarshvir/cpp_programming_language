#include<iostream>
using namespace std;
int a = 10;   // global variable
int fun(){
    cout << a << endl;
}
int main(){
    fun();
    cout << a;
}