#include <iostream>  
using namespace std;  
  
void registerStorageClass() {  
    cout << "Illustrating the register class\n";  
  
    // Declaring a register variable  
    register char b = 'G';  
    register int a = 5;
  
    // Displaying the value of the register variable 'b'  
    cout << "Value of the variable 'b' declared as register: " << b << endl;
    cout << a << endl;  
}  
  
int main() {  
    // Demonstrating the register Storage Class  
    registerStorageClass();  
    return 0;  
}  