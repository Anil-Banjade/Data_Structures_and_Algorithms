#include <iostream>
#include <cmath>
class Complex{
  int real,imag;

public:
  
  Complex(int r, int i){
    real=r;
    imag=i;

  }

  friend double Magnitude(const Complex& c);

};

double Magnitude(const Complex& c){

  double mag=std::sqrt(c.real*c.real+c.imag*c.imag);

  return mag;

}

int main(){

  Complex c1(4,3);
  Complex c2(2,3);

  double mag1=Magnitude(c1);
  double mag2=Magnitude(c2);

  std::cout<<"Mag of c1 is:"<<mag1<<"\n";
  std::cout<<"Mag of c2 is:"<<mag2<<"\n";

  return 0;

}




  

  
    
