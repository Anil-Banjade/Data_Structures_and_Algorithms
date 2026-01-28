#include <iostream>
#include <cmath>

template<class T>
 void squareRoot(T &num1){
  T &a=num1;
  try{
    if(num1>0){
      num1=num1;
    }else{
      throw (&num1);
    }
    }
  catch(T *num2){
    std::cout<<"No in catch before is:"<<num1<<"\n";
    *num2=*num2*(-1);
    //num1++;
    //*num2++;
    std::cout<<"No in catch is:"<<num2<<"\n";
  }
  std::cout<<"no outside catch is:"<<num1<<" "<<a<<"\n";
  
    T sqrtOfNo=sqrt(num1);
    std::cout<<"Square root of no is:"<<sqrtOfNo<<"\n";
  }

int main(){  
  int a=-9;
  double c=8.9;
  squareRoot(a);
  squareRoot(c);
}

