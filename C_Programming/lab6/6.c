#include<stdio.h> 
int Factorial();
void main(){
	int n,z;
	scanf("%d",&n);
	z=Factorial(n);
	printf("factorial is %d",z);

}


	int Factorial(int n){
		if (n==1){
			return 1;
		}
		else{
			return(n*Factorial(n-1));
		}

	}






	
