// parameterized way

#include <iostream>

void f(int i,int sum){
    if(i<1){
        std::cout<<sum<<" ";
        return;
    }
    f(i-1,sum+i);
}


int main(){
    f(3,0);
}

// f(3,0)--> f(2,3)-->f(1,5)-->f(0,6) so 6 is printed and it returns
// and all functions are completed.