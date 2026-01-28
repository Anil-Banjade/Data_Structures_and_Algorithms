#include <iostream>
using namespace std;
class Student{
  int a;

public:
  Student(){
    a=0;
  }
  Student(int x){
    a=x;
  }

  void doubleStudent(){
    a=2*a;

  }

  void setStudent(){
    
    this->a=a;
  }

  void increaseStudent(){
    this->a=a+2;
  }

  int getStudent(){
    return a;
  }

};

int main(){
  Student s(3);
  s.doubleStudent();
  cout<<s.getStudent()<<"\n";
  s.setStudent();
  cout<<s.getStudent()<<"\n";
  s.increaseStudent();
  cout<<s.getStudent()<<"\n";

}
