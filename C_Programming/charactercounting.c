
/*
#include <stdio.h>
#define EOL '\n'
int main()
{
	long nc;
	nc = 0;
	int c;
	while ((c=getchar()) != EOF){

		++nc;
		if (c==EOL){
			printf("%ld \n",nc-1);
			nc=0;	
		}
	}

}


*/

// both correct

#include<stdio.h>
/*int main(){
	long nc;
	nc=0;
	while (getchar()!=EOF)
		++nc;
	printf("%ld \n",nc-1);
}

*/

int main(){
	double nc;
	for (nc=0; getchar()!=EOF; ++nc)
		;
	printf("%.0f \n", nc-1);
}

/*The body of this for loop is empty, because all the work is done in the test and increment
parts. But the grammatical rules of C require that a for statement have a body. The isolated
semicolon, called a null statement, is there to satisfy that requirement. We put it on a separate
line to make it visible. 
*/
