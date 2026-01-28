#include<stdio.h>
int main(){
	float fahr,cels;
	float lower,upper,step;
	lower=0;
	upper=300;
	step=20;
	fahr=lower;
	while(fahr<=upper){
		cels=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f farenheit is %6.1f \n",fahr,cels);
		fahr=fahr+step;

	}
}


/*
#include <stdio.h> include information about standard
library
main() define a function called main
 that received no argument values
 { statements of main are enclosed in braces
  printf("hello, world\n"); main calls library function printf
   to print this sequence of characters
   } \n represents the newline character

   The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in
   C, as in many other languages, integer division truncates: any fractional part is discarded.
   Since 5 and 9 are integers. 5/9 would be truncated to zero and so all the Celsius temperatures
   would be reported as zero. 


   %d print as decimal integer
   %6d print as decimal integer, at least 6 characters wide
   %f print as floating point
   %6f print as floating point, at least 6 characters wide
   %.2f print as floating point, 2 characters after decimal point
   %6.2f print as floating point, at least 6 wide and 2 after decimal point 

   Among others, printf also recognizes %o for octal, %x for hexadecimal, %c for character, %s
   for character string and %% for itself. 

 */
