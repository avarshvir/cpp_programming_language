#include<iostream>
using namespace std;
class Dog{
    private:
    string dogBreed;
    float dogRating;
    int dogAge;

    public:
    Dog(string dogBreed, float dogRating, int dogAge){
        this->dogBreed = dogBreed;
        this->dogRating = dogRating;
        this->dogAge = dogAge;
    }
    int dogDisplay(){
        cout << dogBreed << endl;
        cout << dogRating << endl;
        cout << dogAge << endl;
    }
};

int main(){
    Dog d1("Boxer",8.9,4);
    d1.dogDisplay();
}
