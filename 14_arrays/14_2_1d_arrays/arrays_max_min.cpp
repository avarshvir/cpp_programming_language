#include<iostream>
using namespace std;
int main(){
    int arr[] = {56,11,66,77,5};
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }

    }

    cout << "max : " << max << endl;
    cout << "min : " << min;
}