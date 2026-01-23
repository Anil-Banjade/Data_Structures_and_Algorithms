// print from 1 to N but without using f(i+1,n) ie i+1 should not be used

// Backtracking

#include <iostream>

void printNum(int i, int n){
    if(i<1)
        return;
    printNum(i-1,n);
    std::cout<<i<<" ";
    
}

int main(){
    printNum(3,3);

}



// check the image here print doesn't happens at first
// f(3,3)calls f(2,3) then f(1,3) then f(0,3)

// f(0,3) returns as 0<1 so func comes to f(1,3).
// at f(1,3) it comes to print(i) so it prints i of this function which is 1 then it is completed so removed from stack.
// now at stack f(2,3) is there at top so i=2 in this function so 2 is printed
// at last 3 is printed and stack space is empty.