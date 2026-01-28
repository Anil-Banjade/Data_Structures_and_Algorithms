#include <iostream>

class Plane{
    int a, b, c;

    public:
    Plane(){}
Plane(int x, int y, int z):a(x),b(y),c(z){}

friend Plane operator-(const Plane& p1){
    Plane temp;
    temp.a=-p1.a;
    temp.b=-p1.b; 
    temp.c=-p1.c;
    
    return temp;
}
void display(){
    std::cout<<a<<" "<<b<<" "<<c<<"\n";
}

};
int main(){

    Plane p1(1,3,5);
    p1.display();
    Plane p2= -p1;

    
    p2.display();
    
}