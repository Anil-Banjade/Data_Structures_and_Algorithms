#include <iostream>
#include <string>
#include <string_view>
class Person{
  std::string name{};
  int rollno;
public:
Person(std::string nam="anil", int r=7){
    name=nam;
    rollno=r;
}

  void display(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nRollno: "<<rollno;

  }
};


int main(void){
  Person p1;
  p1.display();
  Person p2("ab",17);
  p2.display();
  return 0;

}
