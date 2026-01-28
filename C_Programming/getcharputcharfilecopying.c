#include<stdio.h>
int main(){
	int c;
	c=getchar();
	while (c!=EOF){
		putchar(c);
		c=getchar();
		printf("%d\n",EOF);
	}
}

/* 
 OR 
 int c;
 while((c=getchar())!=EOF)
 putchar(c);
 */
