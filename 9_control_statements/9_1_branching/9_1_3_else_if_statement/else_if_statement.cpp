#include<iostream>
using namespace std;
int main(){
    int num1 = 15;
    int num2 = 30;
    int num3 = 10;
    
    if(num1 > num2 && num1 > num3){
        cout << "num1 is greater";
    }
    else if (num2 > num1 && num2 > num3){
        cout << "num2 is greater";
    }
    else{
        cout << "num3 is greater";
    }
    
}