/*
goto statement is also known as jump statement. 
It is used to transfer control to the other part of the program. 
It unconditionally jumps to the specified label.
It can be used to transfer control from deeply nested loop or switch case label.
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    
    
    cout << "Enter a number: ";
    cin >> num;

   
    if (num <= 0) {
        cout << "Error: Please enter a positive number." << endl;
        goto end; // Jump to the 'end' label
    }

  
    cout << "Square of the number: " << num * num << endl;

    end:
    cout << "End of the program." << endl;

    return 0;
}
