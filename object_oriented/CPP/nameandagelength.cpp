#include <iostream>
#include <string>

int main(){
  std::string name{};
  std::cout<<"Enter you full name:";
  std::getline(std::cin>>std::ws,name);
  int age{};
  std::cout<<"Enter your age:";
  std::cin>>age;

  int lengthOfName{};
  lengthOfName=name.length();

  int lengthAndAge=lengthOfName+age;
  std::cout<<"Your age + length of name is: "<<lengthAndAge<<"\n";

  return 0;
  
}
