#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter character : ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << ch <<" is vowel";
        break;
    case 'e':
        cout << ch <<" is vowel";
        break;
    case 'i':
        cout << ch <<" is vowel";
        break;
    case 'o':
        cout << ch <<" is vowel";
        break;
    case 'u':
        cout << ch <<" is vowel";
        break;
    default:
        cout << ch <<" is consonant";
        break;
    }
}