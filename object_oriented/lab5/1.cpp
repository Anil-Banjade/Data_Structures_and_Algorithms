#include <iostream>

class Complex
{
  const int real;
 int img;

public:
  Complex(int r, int i):real(r), img(i){
  
  }

  int getReal() const{
    // error since we can't change  real=real+2;
    return real+1;
  }

  int getImag()
  {
    img=img+1; // can change since func not const
    return img;
  }

  void display() const; 
};


void Complex::display() const{
  std::cout<<real<<" + " <<img<<"i \n";
}


int main()
{
  Complex c1(1, 2);
  c1.display();
  std::cout<<c1.getReal()<<" + "<<c1.getImag()<<"i\n";
}


