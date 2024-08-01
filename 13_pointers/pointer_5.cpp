#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;
    int **ptr2 = &ptr;

    for (auto i : arr) {
        cout << "Address: " << ptr + i << " Value: " << *(ptr + i) << endl;
    }

    cout << "double pointer : " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Address : " << (*ptr2 + i) << " Value : " << **ptr2+i << 
        " Double pointer Address : " << ptr2+i << endl;
     }

    return 0;
}
