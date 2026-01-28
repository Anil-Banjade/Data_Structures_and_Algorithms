#include <iostream>

class Distance{
    public:
    int km;
    int m;
    Distance(int a, int b):km(a),m(b){}
    operator int(){
        int res=km*100+m;
        return res;
        
    }
};


int main(){

    Distance d1(100,200);
    int m1=d1;
    std::cout<<m1;

}