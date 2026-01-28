#include <iostream>

class Plane{
    int a, b, c;

    public:
    Plane(){}
Plane(int x, int y, int z):a(x),b(y),c(z){}


Plane operator +(Plane &p){
    Plane temp;
    temp.a=this->a+p.a;
    temp.b=this->b+p.b; 
    temp.c=this->c+p.c;
    
    return temp;
}
void display(){
    std::cout<<a<<" "<<b<<" "<<c<<"\n";
}

};
int main(){

    Plane p1(1,3,5);
    Plane p2(2,3,5);
    Plane p3=p1+p2;

    
    p3.display();
    
}