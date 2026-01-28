#include <iostream>

void divide(double x, double y){
std::cout<<"inside divide \n";
    try{
        
        if(y==0.0){
        throw y;
    }else{
        std::cout<<x/y;
    }
    }
    catch(double e){
     
        std::cout<<"Exception1\n";
    
        throw;
    }
    std::cout<<"End of divide \n";
        
    }

int main(){

    try{
        divide(0,1);
        divide(5.0,0.0);
    }
    // catch(int){
    //     std::cout<<"Exception2 in int\n";

    // }
    catch(double){
        std::cout<<"Exception in double \n";
        
    }

    
}