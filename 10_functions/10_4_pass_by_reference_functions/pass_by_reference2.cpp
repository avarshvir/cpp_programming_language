#include<iostream>
using namespace std;
void incrementByValue(int *x){
    *(x)++;
    //cout << "Inside incrementByValue "<< x << endl;
    cout << "Inside incrementByValue "<< *x << endl;
}
int main(){
    int num = 5;
    cout << "Before increment : " << num << endl;
    incrementByValue(&num);
    cout << "After increment : " << num << endl;
    return 0;
}