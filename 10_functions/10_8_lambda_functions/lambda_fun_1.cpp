#include <iostream>
#include<typeinfo>
using namespace std;

int main() {

  // create a lambda function that prints "Hello World!"
  auto greet = []() {
    cout << "Hello World!";
  };

  // call lambda function
    greet();

    cout << endl;
    cout << "a : " << typeid(greet()).name() << endl;


  return 0;
}