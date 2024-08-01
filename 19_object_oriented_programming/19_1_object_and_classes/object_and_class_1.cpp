#include<iostream>
using namespace std;
class OOPExample1{
    public:
    int data;
    char c;
};
int main(){
    OOPExample1 oopExample;
    oopExample.data = 10;
    oopExample.c = 'A';

    cout << "data : " << oopExample.data << endl;
    cout << "c : " << oopExample.c;
}