#include <iostream>

class Numbers{
    int num1;
    int num2;
public:
    Numbers(){}
    Numbers(int a,int b):num1(a),num2(b){}
    Numbers(Numbers &n1){
        num1=n1.num1+20;
        num2=n1.num2+30;
    }
    void display(){
        std::cout<<"\n";
        std::cout<<num1<<'\n'<<num2;
    }



}; 


int main(){
    int a=5;
    int b=3;
    Numbers n1(a,b);
    n1.display();
    Numbers n2(n1);
   // n2=n1;
    n2.display();
    
}