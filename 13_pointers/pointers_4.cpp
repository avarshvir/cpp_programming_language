#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int,5> arr = {1, 2, 3, 4, 5};

    int* ptr = arr.data();  // Corrected pointer assignment

    for (auto i : arr) {
        cout << "Address: " << ptr + i << " Value: " << *(ptr + i) << endl;
    }

    return 0;
}
