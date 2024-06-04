/*
implicit typecasting = automatically by compiler
explicit typecasting = done by user
*/
#include<iostream>
using namespace std;
int main(){
    //implicit
    int a = 10;
    char b = 'a'; // a = 97
    a+=b; // a+=b == a=a+b;
    cout <<"implicit : " <<a <<endl;

    //explicit
    float c = 20.4;
    int d = 10;
    float e = c * float(d);
    cout << "explicit : "<<e << endl;


}