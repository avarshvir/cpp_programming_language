#include <iostream>  
using namespace std;  
  
class Test {  
public:  
    int x;  
    mutable int y;  
  
    Test() {  
        x = 4;  
        y = 10;  
    }  
};  
  
int main() {  
    const Test t1;  
    t1.y = 20; // Mutable member can be modified in a const object  
    cout << t1.y; // Output: 20  
    return 0;  
}  