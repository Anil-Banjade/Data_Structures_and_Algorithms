//function way to print sum

#include <iostream>

int f(int n){
    if(n==0)
        return 0;
    return (n+f(n-1));
}

int main(){
    int sum=f(3);
    std::cout<<sum<<" ";
}   

// in image 7.jpg we can see 3+f(n-1) here 3 is there but we are waiting what is f(n-1) so f(n-1) func is called.
// again 2+f(1) so f(1) func is called while this line is waiting. 