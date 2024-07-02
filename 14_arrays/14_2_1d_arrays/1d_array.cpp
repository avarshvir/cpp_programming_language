#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements "<< endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array Elements are " << endl;
    for(int i = 0; i < n; i ++)
        cout << arr[i] << " ";
}