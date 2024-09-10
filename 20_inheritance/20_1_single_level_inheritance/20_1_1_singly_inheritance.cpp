#include<iostream>
using namespace std;
class base{
	int data1;
	public:
		int data2;
		void set_data();
		int get_data1();
        int get_data2();
};
void base::set_data(){
	data1=10;
	data2=20;
}
int base::get_data1(){
	return data1;
}
int base::get_data2(){
	return data2;
}
class derived:public base{
	int data3;
	public:
		void process();
		void display();
};
void derived::process(){
	data3=get_data1()*data2;
}
void derived::display(){
	cout<<"data 1 : "<<get_data1()<<endl;
	cout<<"data 2 : "<<data2<<endl;
	cout<<"data 2 using fun() : "<<get_data2()<<endl;
	cout<<"data 3 : "<<data3<<endl;
	//cout<<"data 3 using fun() : "<<process()<<endl;
}
int main(){
	derived d1;
	d1.set_data();
	d1.process();
	d1.display();
   base b1;
   b1.set_data();
   b1.get_data1();
}