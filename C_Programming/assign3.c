#include<stdio.h>
#include<math.h>
void main(){

	int i=1,j=1,k=1,x,n,z,sinx=0;
	scanf("%d\n%d",&x,&n);
	for (i=1;i<=n;i++){
		for(j=1;j<i;j=j+2){
		}
			int fact=1;
			for(k=1;k<=j;k++){
				fact=fact*k;
			}
			printf("factorial of %d is %d \n",j,fact);
			z=(pow(x,j)/fact);
			if(i%2==0){
				z=z*(-1);
			}
		//	printf("%d\n",z);
			sinx=sinx+z;
		
	}

	printf("%d",sinx);

				





}



