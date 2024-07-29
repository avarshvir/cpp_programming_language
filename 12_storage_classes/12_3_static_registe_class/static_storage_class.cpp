#include <iostream>  
using namespace std;  
  
// Function containing static variable  
int staticFun() {  
    cout << "For static variables: ";  
    static int count = 0;  
    count++;  
    return count;  
}  
  
// Function containing non-static variable  
int nonStaticFun() {  
    cout << "For Non-Static variables: ";  
  
    int count = 0;  
    count++;  
    return count;  
}  
  
int main() {  
    // Calling functions with static variables  
    cout << staticFun() << "\n";  
    cout << staticFun() << "\n";  
  
    // Calling functions with non-static variables  
    cout << nonStaticFun() << "\n";  
    cout << nonStaticFun() << "\n";  
  
    return 0;  
}  