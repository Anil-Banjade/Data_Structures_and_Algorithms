// in opposite of 3

#include <iostream>

void printNum(int i, int n){
    if(n==i)
        return;
    std::cout<<n<<" ";
    printNum(i,n-1);
}
// or

void f(int i,int n){
    if(i<1)
    return;
    std::cout<<i<<" ";
    f(i-1,n);
}


int main(){
    printNum(0,3);

    f(3,3);
}




