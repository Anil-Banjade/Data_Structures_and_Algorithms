#include <iostream>
using namespace std;
class Student{
    string name;
    public:
    Student():name("ab"){}

    friend ostream& operator<<(ostream& os, const Student& s){
        os<<s.name;
        return os;
    }
    friend istream& operator>>(istream& is, Student& s){
        is>>s.name;
        return is;
    }


};

int main(){
    Student s1;
    cout<<"Enter your name:\n";
    cin>>s1;
    
    cout<<s1;
}

// Operator Overloading: 
//When overloading certain operators, like << for output or >> for input, you often need access to the private members of a class. These functions are often declared as friend functions to enable direct access to the class's private members.