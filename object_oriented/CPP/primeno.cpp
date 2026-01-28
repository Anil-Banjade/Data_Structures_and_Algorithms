#include <iostream>

int userInput(){
  std::cout<<"Enter a no: ";
  int x{};
  std::cin>>x;
  return x;
}
bool primeNo(int num){
  int count=0;
  int i;
  for(i=1;i<num;i++){
    if (num%i==0)
      count=count+1;
  }

  if (count>1)
    return false;
  else
    return true;
}
	 
int main(){

  int num{userInput()};
 

  if(primeNo(num))
    std::cout<<num<<" is prime";
  else
    std::cout<<num<<" is not prime"; 
  return 0;
  
}
