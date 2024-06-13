#include<iostream>
using namespace std;
void add(int a, int b){
    cout << a + b << endl;
}
void add(double a, double b){
    cout << a + b << endl;
}
int main(){
    add(5,6);
    add(7.4,8.8);
}