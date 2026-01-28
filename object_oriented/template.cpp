//Wap to add numbers using template functions overload that function to add string data

#include <iostream>
#include <cstring>
using namespace std;

template <class T>
void Add(T a,T b){
  
  cout<<a+b<<"\n";
}

void Add(string a, string b){
  cout<<a+b<<"\n";

  }


int main(){
  int a=2;
  int b=3;
  Add<int>(a,b);

  Add(string("ab"),string("de"));
  


}
