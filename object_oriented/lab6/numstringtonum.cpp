#include <iostream>
using namespace std;
class StringToInt{
  string input;
  int result;

public:
  StringToInt(string input){
    this->input=input;
    result=0;
  }

  void check(){
    for(int i=0;i<input.length();i++){
      if(input[i]>='0' && input[i]<='9'){
	result=result*10+(input[i]-'0');
      }else{
	result=0;
	break;
      }
    }
  }
  void display(){
    std::cout<<result<<"\n";
  }
    


};

int main(){
  string inp1="343";
  string inp2="ab343";

  StringToInt p1(inp1);
  StringToInt p2(inp2);
  p1.check();
  p2.check();
  p1.display();
  p2.display();
  

}
  
