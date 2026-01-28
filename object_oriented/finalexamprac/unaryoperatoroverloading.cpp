#include <iostream>

class Plane{
    int a, b, c;

    public:
    Plane(){}
Plane(int x, int y, int z):a(x),b(y),c(z){}
// void operator -(){
//     this->a=-a;
//     this->b=-b;
//     this->c=-c;

// }

Plane operator -(){
    Plane temp;
    temp.a=-a;
    temp.b=-b; 
    temp.c=-c;
    
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