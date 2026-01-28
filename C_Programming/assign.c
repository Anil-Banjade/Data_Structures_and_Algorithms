#include<stdio.h>
#include<math.h>
void main(){
	int i=1,j;
	float y, sum=0;
	for (i=i;i<=7;i++){
		int fact=1;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		printf("factorial of %d is %d \n",i,fact);
		y=i/fact;
		sum=sum+y;
	}

	printf("sum is %.2f",sum);
}
