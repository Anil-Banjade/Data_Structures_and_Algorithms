#include <iostream>

class Person{
  char name[255];
  char rollno[255];
public:
  void getData(){
    std::cout<<"Enter name\n";
    std::cin>>name;
    std::cout<<"Enter rollno\n";
    std::cin>>rollno;
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
