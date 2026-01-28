#include <iostream>

class Complex{
    int real;
    int imag; 
public:
    Complex(int r, int i):real(r),imag(i){};
    Complex(){};
    void display(){
        std::cout<<real<<" + "<<imag<<" j \n";
    }

    friend Complex complex_Double(Complex &c);

    
};
Complex complex_Double(Complex &c){
    
    Complex temp;
    temp.real=2*c.real;
    temp.imag=2*c.imag;
    return temp;
}
int main(){

    Complex c1(3,5);
    c1.display();
    Complex c2;
      
    c2=complex_Double(c1);
    c2.display();

    
}