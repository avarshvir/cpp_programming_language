#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = {1,3,10,5,6};
    for (int i = size - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
}