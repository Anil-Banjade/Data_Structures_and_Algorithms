#include <iostream>


int readNumber(){
  int num{};
  std::cout<<"Enter no:";
  std::cin>>num;
  return num;

}

void writeAnswer(int x,int y){
  std::cout<<"Sum is "<<x+y<<'\n';
}

int main(){
  int x{readNumber()};
  int y{readNumber()};

  writeAnswer(x,y);
  return 0;

}
