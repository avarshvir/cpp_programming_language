#include<iostream>
using namespace std;
int main(){
    int arr[2][3][4] = {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
            },
            {
             {11,22,33,44},
            {5,6,7,8},
            {9,10,11,12}   
            },
            };

       for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
       }     
}