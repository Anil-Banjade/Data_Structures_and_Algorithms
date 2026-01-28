#include<stdio.h>
int main(){
	float fahr;
	for (fahr=0; fahr<=300;fahr=fahr+20){
		printf("%3.0f celcius is %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
		
	}

// you can remove curly brackets in for loop if single statement


}

/*
symboli constants


#define name replacement list 

#include <stdio.h>
 #define LOWER 0 /* lower limit of table */
 #define UPPER 300 /* upper limit */
 #define STEP 20 /* step size */
 /* print Fahrenheit-Celsius table */
/*
 main()
	 {
		  int fahr;
		   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
			    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
		    }
The quantities LOWER, UPPER and STEP are symbolic constants, not variables, so they do not
appear in declarations. Symbolic constant names are conventionally written in upper case so
they can ber readily distinguished from lower case variable names. Notice that there is no
semicolon at the end of a #define line. 

 */
