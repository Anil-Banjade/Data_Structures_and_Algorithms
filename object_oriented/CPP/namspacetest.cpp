#include<iostream>
void cout(){
    std::cout<<"Ab";
}
int main(){
    std::cout<<"Hello";
    cout();
    return 0;
}

//This works


/*
#include<iostream>
using namespace std;
void cout(){
    std::cout<<"Ab";
}
int main(){
    cout<<"Hello";
   cout();
    return 0;
}
 */

//This won't work 
