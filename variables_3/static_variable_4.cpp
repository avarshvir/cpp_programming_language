#include<iostream>
using namespace std;
void staticVariable(){
    static int count = 1;
    cout << count << " ";
    count++;
}
int main(){
    for(int i = 0; i < 5; i++)
        staticVariable();
    return 0;
}