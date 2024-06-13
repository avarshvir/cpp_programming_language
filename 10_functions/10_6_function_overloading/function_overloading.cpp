#include<iostream>
using namespace std;
int area (int x){
    return x*x;
}
int area (int x, int y){
    return x * y;
}
int main(){
    cout << "Area of square is "<< area(5) << endl;
    cout << "Area of rectangle is "<< area(5,6) << endl;
}