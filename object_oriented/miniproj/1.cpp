#include <iostream>
#include <vector>

//void printElements(int* usrInp){
//std::cout<<usrInp;
//}

void addElements(){
  int newElem{};
  //  std::cin>>usrInp[i];
  
}
//void deleteElements(){
//delete usrInp[i]


//}

int returnSize(std::vector<int>& usrInp){
  int size=usrInp.size();
  return size;
}


int main(){
  std::vector<int> usrInp(2);
  
    std::cout<<" Enter 'p' to print element \n Enter 'a' to add element \n Enter 'd' to delete element \n Enter 'r' to return size \n Enter 'e' to exit\n";
   
                //std::cin>>usrInp
	       //printElements(usrInp);
	       //addElements();
              //deleteElements();

    
    int size=returnSize(usrInp);
    std::cout<<size;
 
   
    // exit();
}
