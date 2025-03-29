#include<iostream>
using namespace std;

enum Days{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main(){
    Days today = Tuesday;
    if(today == Tuesday){
        cout << "Day is Tuesday" << endl;
        cout << "Numeric Value: " << today << endl; 
    }
}