#include <iostream>

class B;
class A{
    
    int a;
    public:
    A(int n):a(n){}
    friend int Add(A&); 
};

class B{
    int b;
    public:
    B(int n):b(n){}

    // int Add(A &p1){
        int Add(A &a1){
        // A p1(5);
        int sum=a1.a+b;
        return sum;
    }
};
int main(){
    A a1(3);
    B p2(4);

    std::cout<<p2.Add(a1);
    
}