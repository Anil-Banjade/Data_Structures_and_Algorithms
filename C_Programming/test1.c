#include<stdio.h>
#include<math.h>
void main(){
	char n;
	scanf("%c",&n);
	switch (n){
		case 'S':
			printf("save");
			break;
		case 'O':
			printf("open");
			break;
		case 'E':
			printf("exit");
			break;
		default:
			printf("invalid");

	}	
}

