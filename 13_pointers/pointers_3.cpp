#include<iostream>
using namespace std;
int main(){
    int **p2;
    int *p1;
    int val = 500;

    p1 = &val;                 // p1 points to the address of val
    p2 = &p1;                  // p2 points to the address of p1

    cout << *p1 << endl;
    cout << p1 << endl;
    cout << **p2 <<endl;
    cout << *p2 <<endl;
    cout << p2 <<endl;

    return 0;
    

}