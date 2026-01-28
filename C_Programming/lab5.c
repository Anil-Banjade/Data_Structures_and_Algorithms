#include<stdio.h>
#include<math.h>
void main(){

	int n,a=0,i,c=0,sum=0;
	scanf("%d",&n);
	int z=n;
	int y=n;
       	
	while(n>0){
		n=n/10;
		c=c+1;
	}
	printf("count is %d \n",c);

	for(i=1; i<=c;i++){

		a=z%10;
		
		sum=sum+pow(a,c);
		z=z/10;
	}

	if(sum==y){
		printf("arm \n");
	}
	else{
		printf("no");

		
		 



	}
}


