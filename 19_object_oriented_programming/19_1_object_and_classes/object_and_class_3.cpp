#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age,id;
    float marks;

    public:
    void display(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Id : " << id << endl;
        cout << "Marks : " << marks << endl;
    }
    string setName(string name);
    int setAge(int age);
    int setId(int id);
    float setMarks(float marks);
};

string Student :: setName(string name){
    this->name = name;
}

int Student :: setAge(int age){
    this->age = age;
}

int Student :: setId(int id){
    this->id = id;
}

float Student :: setMarks(float marks){
    this->marks = marks;
}

int main(){
    Student s1;
    s1.setName("XYZ");
    s1.setAge(15);
    s1.setId(1921);
    s1.setMarks(99.5);
    s1.display();
}


