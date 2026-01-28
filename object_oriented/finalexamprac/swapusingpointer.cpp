#include <iostream>

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

};

int main(){
    int a=5;
    int b=3;
    swap(&a,&b);
    std::cout<<a<<" "<<b;
}