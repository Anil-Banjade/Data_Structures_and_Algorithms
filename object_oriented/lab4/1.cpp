#include <iostream>
#include <string>
class students{
public:
  int noOfStudents{};
  static int counter;
  
  char* name=new char[noOfStudents];

  students(){
    counter++;
  }
  //  int getNoOfStudents(){

  //return counter;

  //}

      
  };
  
int students::counter=0;

void test(){
  for(int i = 0; i < 17; i++){
    students f[3];
  }

}

int main(){

  
  students p1, p2;
  
  //int x=p1.getNoOfStudents();
  
  //  students fff;
  test();

  std::cout<<students::counter;
  

  
}
