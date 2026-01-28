#include<stdio.h>
int sumrev(int n, int*p);
void main(){
	int num,sum,rev;
	scanf("%d",&num);
	rev=sumrev(num,&sum);
	printf("rev and sum is %d",rev);
}

int sumrev(int n,int*p){
	int rem,sum=0,rev;
	while(n>0){
		rem=n%10;
		sum=sum+rem;
		rev=rev*10+rem;
		n=n/10;
	}

	return rev;



}


