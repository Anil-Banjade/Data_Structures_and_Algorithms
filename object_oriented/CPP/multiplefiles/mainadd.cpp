#include <iostream>

int getInteger();

int main(){
  int x{getInteger()};
  int y{getInteger()};

  std::cout<<"sum is "<<x+y;

  return 0;

}


  
