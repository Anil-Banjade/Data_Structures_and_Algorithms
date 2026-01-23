#include <iostream>

void printName(int i, int n){

    if(i>n)
        return;
    i++;
    std::cout<<"ab ";
    printName(i,n); 
    // or remove i++ and do printName(i+1,n)
}


int main(){
    int n=3;
    int i=1;
    printName(i,n);

}

// TC O(n) because n function are called
// in Space Complexit we assume the space taken in stack so O(n) since n function are waiting in stack to be completed.