#include <iostream>
#include "person.h"


void Person::getData(){
  std::cout<<"Enter name\n";
  std::cin>>name;
  std::cout<<"Enter rollno\n";
  std::cin>>rollno;
}

void Person::display(){
  std:: cout<<"\nName: "<<name;
  std::cout<<"\nAge: "<<rollno;
}
