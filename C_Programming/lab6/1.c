#include<stdio.h>
int prime();

int main(){
	int n,count=0,i;
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if (n%i==0){
			count=count+1;
		}

	}
	prime(count);
}


int prime(count){
	if (count>=1){
		printf(" is prime");
	}
	else{
		printf("is not prime");
	}

}





