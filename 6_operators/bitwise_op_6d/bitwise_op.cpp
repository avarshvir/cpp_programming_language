#include<iostream>
using namespace std;
int main(){
    int a = 12; // 1100
    int b = 10; // 1010
    int and_c = a & b;      // and_c = 1000 which is 8
    int or_c = a | b;       // or_c = 1110 which is 14 
    int xor_c = a^b;        // xor_c = 0110 which is 6
    int not_a = ~a;
    int c = 2;
    int left_shift = c<<1;
    int right_shift = c>>1;
    cout << "and : "<<and_c<<endl;
    cout << "or : "<<or_c<<endl;
    cout << "xor : "<<xor_c<<endl;
    cout << "not a : "<<not_a<<endl;
    cout << "left shift : "<<left_shift<<endl;
    cout << "right shift : "<<right_shift<<endl;
    
}