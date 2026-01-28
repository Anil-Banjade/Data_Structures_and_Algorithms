#include<iostream>


int main(){
  int size=2;
  int* usrInp=new int[size];

   std::cout<<" Enter 'p' to print element \n Enter 'a' to add element \n Enter 'd' to delete element \n Enter 'r' to return size \n Enter 'e' to exit\n";
   int conti=1;
   while(conti=1){
     
   char task;
   std::cout<<"Enter task\n";
   std::cin>>task;

   int newSize;
   if(task=='a'){
     for(int i=0;i<size;i++){
       std::cout<<"Enter user input:";
       std::cin>>usrInp[i];
       if (size==i){
	  int newSize=size*2;
        }
       int* newArray=new int[newSize];
         for (int i=0;i<size;i++){
           newArray[i]=usrInp[i];
         }
	 size=newSize;
	 
      }
     
     

   }
   else if(task=='p'){
  
  for(int j=0;j<size;j++){
    std::cout<<usrInp[j]<<"\n";
    
  }
   }

   conti=0;

   }

   

} 
