#include <iostream>

class Design2;
class Design1{
public:
  int code,qty,price;


  Design1(int c,int q, int p):code(c),qty(q),price(p){}

  operator Design2() const;
};


  class Design2{
  public:
    int code,value;
 
    Design2():code(0),value(0){}

    Design2(int c, int v):code(c),value(v){}

    Design2& operator=(const Design1& p){
      code=p.code;
      value=p.qty*p.price;
      return *this;


  }

    void display(){
      std::cout<<"Code is: "<<code <<" and value is: "<<value;
  }


  };
Design1::operator Design2() const{
  return Design2(code, qty*price);
}

int main(){

  Design1 d1(32,100,120);

  Design2 d2;
  d2=d1;

  d2.display();
}
