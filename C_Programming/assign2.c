#include<stdio.h>
#include<math.h>
void main(){
	float i,y;
	for(i=0;i<=60;i++){
		y=2*(exp(-0.1))*i*(sin(0.5))*i;
		
		printf("%f\n",y);
	}


		
	
}

