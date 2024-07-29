#include<iostream>
#include<typeinfo>
using namespace std;
void autoStorageClass(){
    cout << "----Auto  Storage Class----" << endl;
    int a = 5;
    float b = 5.1;
    char*c = "hello";
    char d = 'A';
    auto e = "heloo";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    // Print type information
    cout << "a : " << typeid(a).name() << endl;
    cout << "b : " << typeid(b).name() << endl;
    cout << "c : " << typeid(c).name() << endl;
    cout << "d : " << typeid(d).name() << endl;
    cout << "e : " << typeid(e).name() << endl;
}

int main(){
    autoStorageClass();

    return 0;
}