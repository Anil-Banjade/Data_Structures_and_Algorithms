#include<stdio.h>
#include<string.h>
int words();
void main(){
	int n;
	char word[255];
	scanf("%c",word);
	n=words(word);
	printf("no of words is", n);  
}

int words(char word){ 
	int a;
	a=strlen(word);
	return a;
}

	

