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

    int get_real(){
        return real;
    }
    int get_imag(){
        return imag;
    }

    void setter(int r, int i){
        real=r;
        imag=i;
    }
    

    
};
Complex complex_Double(Complex &c){
    
    Complex temp;
    temp.setter(2*c.get_real(),2*c.get_imag());
    return temp;
}


int main(){

    Complex c1(3,5);
    c1.display();
    Complex c2;
      
    c2=complex_Double(c1);
    c2.display();

    
}