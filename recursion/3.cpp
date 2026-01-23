#include <iostream>

void printNum(int i, int n){
    if(i>n)
        return;
    std::cout<<i<<" ";
    printNum(i+1,n);
}
int main(){
    printNum(1,3);
}