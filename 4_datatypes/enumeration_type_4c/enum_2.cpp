#include<iostream>
using namespace std;

enum Colors{
    Red = 1,
    Green = 2,
    Blue = 3,
    Yellow = 4,
    Orange = 5
};

int main(){
    Colors c = Green;
    cout << c << endl;
}