#include<iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }   
    else{
        return n*factorial(n-1);
    }
}
int main(){
    cout << "Addition is : "<<add(5,7) << endl;
    cout << "Factorial is : "<< factorial(5) << endl;
    return 0;
}