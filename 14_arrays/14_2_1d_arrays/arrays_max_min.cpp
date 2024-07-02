#include<iostream>
using namespace std;
int main(){
    int arr[] = {56,11,66,77,5};
    int max = arr[0];
    int min = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            cout <<"maximum : "<< arr[i] << endl;
           // break;
        }
        if(arr[i] < min){
            cout <<"minimum : "<<arr[i];
        }

    }
}