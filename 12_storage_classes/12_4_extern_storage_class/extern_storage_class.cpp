#include <iostream>  
using namespace std;  
  
// Declaring an extern variable 'x'  
extern int x;  
  
void externStorageClass() {  
    cout << "Understanding the extern class\n";  
  
    // Accessing the extern variable 'x'  
    cout << "Value of the variable 'x', declared as extern: " << x << "\n";  
  
    // Modifying the value of extern variable 'x'  
    x = 2;  
  
    // Displaying the modified value of extern variable 'x'  
    cout << "Modified value of the variable 'x', declared as extern: " << x;  
}  
  
// Defining the extern variable 'x'  
int x = 0;  
  
int main() {  
    // Example of extern Storage Class 
    cout << x << endl; 
    externStorageClass();  

    cout << endl << x;
  
    return 0;  
}  