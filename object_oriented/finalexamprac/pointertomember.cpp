#include <iostream>

class Employee{
public:
    int emp_id;
    Employee(int a):emp_id(a){}

    void set_emp_id(int a){
        emp_id=a;

    }

    void display(){
        std::cout<<"Id is "<<emp_id<<"\n";
    }

};
int main(){

    Employee e(10);
    e.display();

    int Employee::*p1=&Employee::emp_id;

    void (Employee::*p2)(int)=&Employee::set_emp_id;
   
   
    // e.set_emp_id(10);


    // e.display();
} 