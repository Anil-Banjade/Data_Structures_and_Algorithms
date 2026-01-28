#include<iostream>
using namespace std;

class Complex{
    float real,imag;
    public:
    // Complex(){};
    Complex(float,float);
    float get_r(){return real;}
    float get_i(){return imag;}
    void setter(float r,float i){
        real=r;
        imag=i;
    }
    void display();

};

void doubleComplex(Complex);
void doubleComplex_2(Complex &);
Complex doubleComplex_3();

Complex :: Complex(float a=0.0,float b=0.0){
    real=a;
    imag=b;
}

void doubleComplex(Complex c){
    c.setter(2*c.get_r(),2*c.get_i());
}

void doubleComplex_2(Complex &c){
    c.setter(2*c.get_r(),2*c.get_i());
}

Complex doubleComplex_3(Complex c){
    Complex temp;
    temp.setter(2*c.get_r(),2*c.get_i());
    return temp;
}

void Complex::display(){
    cout<<real<<"+j"<<imag<<endl;
}
int main()
{
    Complex c1(2.0,3.0);
    c1.display();
    doubleComplex(c1);
    cout<<"After change: "<<endl;
    c1.display();
    doubleComplex_2(c1);
    cout<<"After change: "<<endl;
    c1.display();
    Complex c2=doubleComplex_3(c1);
    c2.display();
    return 0;
}