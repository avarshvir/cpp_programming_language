//functions, array, pointers, reference are derived datatypes
#include<iostream>
using namespace std;

// functions
void der_fun(){
    cout << "This is function" << endl;
}

int main(){
    der_fun();
    
    //array
    int arr[5] = {1,2,3,4,5};
    cout << arr[2]<< endl;

    //pointers
    int *ptr;
    int var = 1;
    ptr = &var;        // ptr points to var's address
    cout << ptr <<endl;
    cout << &var <<endl;
    cout << *ptr<<endl;
    //cout << *ptr;

    //references
    int original_ref_var = 100;
    int &ref = original_ref_var;    // ref is an alias for original_ref_var
    cout << ref <<endl;
    cout << &ref <<endl;
    cout << &original_ref_var;

}