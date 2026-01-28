#include <iostream>
#include <cstring>
class Person{
  char name[17];
  int rollno;
public:
  void getData(){
    std::strcpy(name,"anil");
    rollno=7;
}

  void display(){
    std::cout<<"\nName: "<<name;
    std::cout<<"\nRollno: "<<rollno;

  }
};


int main(void){
  Person p1;
  p1.getData();
  p1.display();

  return 0;

}
