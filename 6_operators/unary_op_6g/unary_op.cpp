#include<iostream>
using namespace std;
int main(){
    int a = 10;
    /*int b = a++;
    cout << b <<"\n";  --> output = 10
    cout << b <<"\n";
    */
    int c = ++a;      
    cout << c <<"\n";  // --> output = 11

    int b  = a++;     
    cout << b << "\n";         // --> output = 11

    int d = ++a;
    cout << d;         // --> output = 13



}