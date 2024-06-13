/*
continue statement is used to continue loop.
It continues the current flow of the program and skips the remaining code at specified condition. 
In case of inner loop, it continues only inner loop.
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vect = {'a','b','c','d','e','f','g'};
    for(auto v : vect){
        if(v == 'c')
        continue;
        else{
            cout << v <<" ";
        }

    } 
}