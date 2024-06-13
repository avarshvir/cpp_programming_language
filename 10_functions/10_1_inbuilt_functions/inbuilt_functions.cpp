#include<iostream>
#include<cmath>           
using namespace std;
int main(){
    double angle = 45.0;
    cout << tan(angle)<<endl;

    int a = 2;
    cout <<sqrt(a)<<endl;

    cout << pow(a,3) << endl;

    //positive difference between x and y
    cout << fdim(angle,a) << endl;

    //larger number among two numbers x and y.
    cout << fmax(a,angle)<<endl;

    //smaller number among two numbers x and y .
    cout << fmin(angle,a) << endl;
    
}
