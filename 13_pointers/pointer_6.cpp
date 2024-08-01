#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    int** ptr2 = &ptr;

    for (int i = 0; i < 5; ++i) {
        cout << "i: " << i << endl;
        cout << "Address using (ptr + i): " << (ptr + i) << endl;
        cout << "Address using (*ptr2 + i): " << (*ptr2 + i) << endl;
        cout << "Value using *(ptr + i): " << *(ptr + i) << endl;
        cout << "Value using *(*ptr2 + i): " << *(*ptr2 + i) << endl;
        cout << "Address of Double Pointer : " << ptr2 + i << endl;
        cout << "------------------------------" << endl;
    }

    return 0;
}
