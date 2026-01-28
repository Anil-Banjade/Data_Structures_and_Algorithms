#include <iostream>

class Matrix{
  int data[2][2];
public:
   Matrix(){
    data[0][0]=0;
    data[0][1]=0;
    data[1][0]=0;
    data[1][1]=0;

  }


  Matrix(int a, int b, int c, int d){
    data[0][0]=a;
    data[0][1]=b;
    data[1][0]=c;
    data[1][1]=d;

  }

  friend Matrix operator*(const Matrix& m1, const Matrix& m2){

   Matrix temp;

    for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
        temp.data[i][j]=0;
        for(int k=0;k<2;k++){
          temp.data[i][j]+=m1.data[i][k]*m2.data[k][j];

          }

    }
    }
    return temp;
  }
  
  void display(){
    for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
        std::cout<<data[i][j]<<" ";
      }
      std::cout<<"\n";
    }
  }
};




      
int main(){
  Matrix M1(1,2,3,4);
  Matrix M2(1,2,3,4);
  Matrix M3=M1*M2;

  //M1.display();
  //M2.display();
  M3.display();

}
