#include<iostream>
using namespace std;
class UserDefinedType{
    public:
    int a;
    string b;

    UserDefinedType(int a, string b){
        this->a = a;
        this->b = b;
        cout << a << " " <<b;
    }
};
int main(){
    UserDefinedType df(1,"Hello");

    cout << endl;

    cout << "a: " << df.a << ", b: " << df.b << endl;

    return 0;
}