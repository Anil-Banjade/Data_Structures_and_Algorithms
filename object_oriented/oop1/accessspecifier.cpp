#include <iostream>

class Person{
  std::string name{};
  int rollno;
public:

    Person(std::string nam, int r){
      name=nam;
      rollno=r;
    }

    std::string getName(){
      return name;
    }
    int getRollNo(){
      return rollno;
    }
    
};

  

int main(void){
  
  
  Person p2("ab",17);
  std::cout<<"name:"<<p2.getName();
  std::cout<<"roll"<<p2.getRollNo();
  
  return 0;

}
