#include <iostream>

class Distance{
public:
    int km;
    int m;

    Distance(int a, int b):km(a),m(m){}
    operator int(){ 
        int temp=km*1000+m;
        return temp;
        
    }
};

int main(){

    Distance d1(100,200);

    int f1=d1;
    std::cout<<f1;
}