#include<stdio.h>
#include<math.h>
int main(){
	int x,n,i,j;
	float y,sum=0;
	scanf("%d\n%d",&x,&n);

	for (i=1;i<=n;i++){
		int fact=1;
		for (j=1;j<=i;j++){
			fact=fact*j;
		}
		printf("%d is factorail of %d\n",fact,i);


		y=(pow(x,i)/fact);
		sum=sum+y;
		

	
	}
	printf("%f\n",sum+1);



	//	printf("%d",sum);

}

