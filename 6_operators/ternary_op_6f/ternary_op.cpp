#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int max;
    //condition ? expression1 : expression2;
    /*
    If the condition is true, expression1 is evaluated.
    If the condition is false, expression2 is evaluated.
    */
    max = (a>b) ? a : b;
    cout << "maximum : "<< max;
}