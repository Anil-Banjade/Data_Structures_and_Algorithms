#include <iostream>
#include <cmath>
class Complex{
  int real;
  int imag;
public:
  Complex(int r, int i){
    real=r;
    imag=i;

  }

  friend int Magnitude(Complex c);
  

};

int Magnitude(Complex p){
  
  int temp=sqrt(p.real*p.real+p.imag*p.imag);

  return temp;

}


    

int main(){

  Complex c1(5,12);
  std::cout<<"The magniude is "<<Magnitude(c1);


}
