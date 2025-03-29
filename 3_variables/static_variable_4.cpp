#include<iostream>
using namespace std;
void staticVariable(){
    static int count = 1;
    cout << count << " ";
    count++;
}

void counter(){
    static int countt = 0;
    countt++;
    cout << "countt: " << countt << endl;
}

int main(){
    for(int i = 0; i < 5; i++)
        staticVariable();

    cout << endl;
    counter();
    counter();
    return 0;
}
