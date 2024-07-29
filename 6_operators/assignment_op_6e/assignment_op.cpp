#include<iostream>
using namespace std;
class Assignment_Op{
    public:
    int a;
    int b;
    int c;

    Assignment_Op(){
        a = 10;
        b = 10;
    }

    Assignment_Op(int a, int b){
        this->a = a;
        this->b = b;
    }

    void display(){
        cout << "a : " << a << "b : " << b << endl;
        a+=b;
        cout << "a : " << a << endl;
        a-=b;
        cout << "a : " << a << endl;
        a/=b;
        cout << "a : " << a << endl;
        a*=b;
        cout << "a : " << a << endl;
        a=b;
        cout << "a : " << a << endl;
        
    }
};

int main(){
    Assignment_Op as;

    Assignment_Op as2(30,10);

    as.display();
    as2.display();
}