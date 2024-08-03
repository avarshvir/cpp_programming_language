#include<iostream>
using namespace std;
class MultipleConstructor{
    private:
    int num_data;
    float float_data;
    string text_data;
    bool binary_data;

    public:
    MultipleConstructor(){
        cout << "This is Default Constructor " << endl;
    }

    MultipleConstructor(int num_data, bool binary_data){
        this->num_data = num_data;
        this->binary_data = binary_data;
    }

    MultipleConstructor(int num_data, float float_data, string text_data, bool binary_data){
        this->num_data = num_data;
        this->float_data = float_data;
        this->text_data = text_data;
        this->binary_data = binary_data;
    }

    void display(){
            cout << "numeric data : " << num_data << endl;
            cout << "float data : " << float_data << endl;
            cout << "text data : " << text_data << endl;
            cout << "binary data : " << binary_data << endl;
        
    }

};

int main(){
    MultipleConstructor m1;
    MultipleConstructor m2(10,0),m3(10,1.5,"hello",1);
    m2.display();
    m3.display();
}