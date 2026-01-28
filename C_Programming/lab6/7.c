#include<stdio.h>
#include<math.h>
int power();
void main(){
	int a,b,z;
	scanf("%d\n%d",&a,&b);
	z=power(a,b);
	printf("%d",z);
}
int power(int a, int b){ 
	if(b==0){
		return 1;
	}
	if(b==1){
		return a; 
	}
	else{
		return a*(power(a,b-1));

	


	}

}




