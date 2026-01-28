#include <iostream>

class A{
    int num;
    public:
    A(int a):num(a){}

    int increase_A(){
        this->num=num+1;
        return num;
    }
};

int main(){

    A a(10); 

    std::cout<<a.increase_A();
}
