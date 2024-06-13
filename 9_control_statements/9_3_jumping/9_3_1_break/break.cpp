/*
 break is used to break loop or switch statement. 
 It breaks the current flow of the program at the given condition. 
 In case of inner loop, it breaks only inner loop.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,3,5,7,9,10,11,2,4};
    for(auto a : arr){
        if (a%2 == 0)
        {
            break;
        }else{
            cout << a << " ";
        }
        
    }
}