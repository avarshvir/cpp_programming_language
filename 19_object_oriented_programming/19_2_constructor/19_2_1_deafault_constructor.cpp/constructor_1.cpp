#include<iostream>
using namespace std;
class ConstructorExample{
    public:
    ConstructorExample(){
        cout << "This is Default Constructor "<< endl;
    }
};
int main(){
    ConstructorExample c1,c2;
    ConstructorExample c3;
    
    return 0;
}