#include <iostream>
using namespace std;

class Staff{
protected:
  int id;
  string name;
  int phone;
  int acc_no;

public:
  Staff(int a, string b, int c, int d):id(a),name(b),phone(c),acc_no(d){}
  void display(){
    std::cout<<"id:"<<id<<"Name:"<<name<<"phone:"<<phone<<"accout no:"<<acc_no<<"\n";
  }
  
};

class Teaching_staff:virtual public Staff{
protected:
  int no_of_class;

public:
  Teaching_staff(int a,string b, int c, int d, int e):Staff(a,b,c,d),no_of_class(e){}

  void display(){
    std::cout<<"No of class:"<<no_of_class<<"\n";
  } 
};
class Admin_staff:virtual public Staff{
protected:
  int shift;

public:
  Admin_staff(int a,string b, int c, int d, int e):Staff(a,b,c,d),shift(e){}

  void display(){
    std::cout<<"Shift:"<<shift<<"\n";
  }
  
   };
class Department_staff:public Teaching_staff,public Admin_staff{

  string dept_code;
  string dept_block;
public:
  Department_staff(int a,string b,int c, int d, int e, int f, string g, string h):Staff(a,b,c,d),Teaching_staff(a,b,c,d,e),Admin_staff(a,b,c,d,e),dept_code(g),dept_block(h){}

  void display(){
    std::cout<<"Department code is:"<<dept_code<<" Department Block is:"<<dept_block<<"\n";
  }
  
};

int main(){

  Department_staff d1(1,"anil",5,6,7,8,"bct","a-block");

  d1.display();
}
