#include <iostream>
#include <math.h>
class Cartesian;

class Polar{

public:
    int r;
    int theta;

    Polar(int a, int b):r(a),theta(b){}

    Polar(Cartesian& c){
        r=sqrt(pow(c.x,2)+pow(c.y,2));
        theta=(c.y/c.x);
    }
    void display(){
        std::cout<<"r:"<<r<<"\n";
        std::cout<<"theta:"<<theta<<"\n";
    }

    // operator Cartesian(){
    //     Cartesian temp;
    //     temp.x=
    //     temp.y=
    //     return temp;

    // }
};


class Cartesian{
public:

    int x,y;
    Cartesian(int a,int b):x(a),y(b){}

    Cartesian(Polar& p){
        x=p.r*p.theta;
        y=p.r*p.theta;
    }
    
    void display(){
        std::cout<<"x:"<<x<<"\n";
        std::cout<<"y:"<<y<<"\n";
    }

    // operator Polar(){
    //     Polar temp;
    //     temp.r=
    //     temp.theta=
    //     return temp;
    // }


};


int main(){

    Cartesian c(3,5);
    Polar p(10,70);
    p=c;
    p.display();
}