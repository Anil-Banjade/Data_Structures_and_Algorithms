#include <iostream>

class Polygon{
    protected:
    int Length,Height;
    Polygon(int l,int h):Length(l),Height(h){}
    
    virtual void Area()=0;
};

class Rectangle:public Polygon{
    public:

    Rectangle(int l,int h):Polygon(l,h){}
      void Area(){
        std::cout<<"Area of Rectangle is: "<<Length*Height<<"\n";
    }
};
class Triangle:public Polygon{
    public:
    Triangle(int l,int h):Polygon(l,h){}
    void Area(){
        std::cout<<"Area of triangle is: "<<(1.0/2.0)*Length*Height<<"\n";
    }

    
};

int main(){
    Triangle t1(2,4);
    t1.Area();
    Rectangle r1(2,4);
    r1.Area();

    
}
