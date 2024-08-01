#include<iostream>
using namespace std;
struct Point
{
    int a =10;
    int b;
};
int main(){
    struct Point p1;
    p1.b =20;
    cout << p1.a << " " <<p1.b << endl;
}
