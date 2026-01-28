#include <iostream>

class Complex
{
  const int real;
  int img;

public:
  Complex(int r, int i):real(r), img(i){

  }

  int getReal() const{

    
    return real;
  }

  int getImag() {
    //img=7;
    return img;
  }

  void display() const{
    std::cout<<real<<"+"<<img<<"i\n";

  }
  };




int main()
{
  const Complex c1(1, 2);
  Complex c2(2,3);
  c1.display();
  c2.display();
  std::cout<<c2.getReal()<<"+"<<c2.getImag()<<"i\n";
  //error since const object should call const member here getImag is non-const member std::cout<<c1.getReal()<<" + "<<c1.getImag()<<"i\n";
}

