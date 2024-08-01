// pointer arithmetic
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;

    int *ptr2 = &arr[0];
    int *ptr3 = &arr[2];
    
    cout << *ptr2 << endl;
    cout << ptr2 << endl;
    cout << *ptr3 << endl;
    cout << ptr3 << endl;
    


    for(int i = 0; i < size; i++){
        cout <<"Address : " << ptr+i << " Value : " << *(ptr + i) << endl;

    }
}