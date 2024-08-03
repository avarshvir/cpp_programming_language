#include<iostream>
using namespace std;
class ParameterizedConstructorExample{
    private:
    int data;
    string text;

    public:
    ParameterizedConstructorExample(int data, string text){
        this->data = data;
        this->text = text;
    }

    void display(){
        cout << "data : " << data << endl;
        cout << "text : " << text << endl;
    }
};

int main(){
    ParameterizedConstructorExample p1(10,"hello");
    p1.display();
}