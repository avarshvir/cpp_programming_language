#include<iostream>  
using namespace std;  
  
int fabonacci(int n);  
  
int main()  
{  
 int x,i;  
 cout<<"Enter a Number:";  
 //cin>>x;  
 x = 5;
 for (i=0;i<=x;i++){  
 cout<<fabonacci(i)<<"\t";  
 }  
   
 return 0;  
}  
  
int fabonacci(int n){  
 if (n==0)  
 return 0;  
  
 else if (n==1)  
 return 1;  
  
 else {  
 return (fabonacci(n-1)+ fabonacci(n-2));  
 }  
  
}  