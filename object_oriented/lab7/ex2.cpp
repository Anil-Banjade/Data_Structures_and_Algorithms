#include <iostream>
using namespace std;
class A{
    protected:
    int num1;
    public:
    A(int a):num1(a){
        cout<<"Constructor A is called \n";
        }

    ~A(){
        cout<<"Destructor A is called \n";

    }
    
};
class B{
    protected:
    int num2;
    public:
    B(int b):num2(b){
        cout<<"constructor B is called \n";
    }
    ~B(){
        cout<<"Destructor B is called \n";

    }
};

class C:public A, public B{ 
    public:
    string name;
    C(int a, int b, string n):A(a),B(b),name(n){
        cout<<"Constructor C is called \n";
    }

    void display(){
        cout<<"A: "<<num1<<" B: "<<num2<<" Name:"<<name<<"\n";
    }
    ~C(){
        cout<<"Destructor C is called \n";
    }



};

int main(){

    C c(7,17,"ab");
    c.display();
}

