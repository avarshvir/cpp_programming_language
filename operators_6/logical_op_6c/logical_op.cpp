#include<iostream>
using namespace std;
int main(){
    int a = 30;
    int b = 20;
    int c = 10;

    if(a>b && a>c){
        cout<<"a is greater\n";
    }
    else if(b>a && b>c){
        cout<<"b is greater\n";
    }
    else{
        cout << "c is greater\n";
    }

    if(a > b || a < c){
        cout << "a statement\n";
    }
    else if(b>a || b<c){
        cout << "b statement\n";
    }
    else{
        cout << "c statement";
    }
}