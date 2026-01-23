#include <iostream>
int count=0;
void f(){
    if(count==4){
        return; // if return is executed inside function then func gets terminated.
    }
    count++; // if this not added stack overflow since func waiting to complete in stack will reach its limit.
    std::cout<<count<<" ";
    f();
}


int main(){
    f();
}