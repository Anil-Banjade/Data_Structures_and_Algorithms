#include <iostream>

class students{
public:
  static int counter;

  students(){
    counter++;
  }
  
};
int students::counter=0;
void userInput(){
 bool codn=true;
  while(codn){

  }

}
  

  

int main(){
  students p1;
  students p2;
  std::cout<<students::counter;
}
