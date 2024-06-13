#include<iostream>
using namespace std;
//no argument no return
void no_arg_no_ret(){
    cout << "No argument and no return function ";
}

//no argument with return
int no_agr_with_ret(){
    cout << "No argument with return ";
    int a=10;
    int b = 20;
    return a+b;
}

//with argument no return 
void with_arg_no_ret(char a, int b){
    cout << "with argument and no return "<< endl;
    cout << a << " " <<b;
}

//with argument with return
int with_arg_with_arg(int a, int b){
    cout << "With argument with return"<< endl;
    if(a > b){
        return a;
    }else{
        return b;
    }
    return 0;
}

//main function
int main(){
    
    no_arg_no_ret();
    cout << endl;
    int f2 = no_agr_with_ret();
    cout << f2;
    cout << endl;
    with_arg_no_ret('h',4);
    cout << endl;
    cout << with_arg_with_arg(15,10);
}