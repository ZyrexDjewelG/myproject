//Exercise 2: Using printf to Format Numbers//

//We begin by including the functions from stdio.h library
#include <stdio.h>

/*A function is made, it is an int function named main with void parameter
since it does not return a value.*/

int main(void)
//Inside the function we have this process stored within the brackets.//
{
//Variables are also declared the program, i are int variables while x are floats.//	
	int i;
	float x;
//Assignment: assigning values for each variables//
	i = 40;
	x = 839.21f; //f tells that this values is a float//
//Two prinf statements are made with different processes from conversio specification//
	printf("|%d|%-5d|%5.3d|\n", i, i, i, i); 
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

/*FIRST PRINT STATEMENTt: %-5d will print the values of variable with 
maximum of 5 spaces, since the value already have 2 indeces, it will have 3 
more spaces to the right since it is negative. %5.3d will print also print maximum of 5 spaces but 
zero will be added before 40 as p = 3 and this time empty spaces are printed to the left.*/

/*SECOND PRINT STATEMENT: %10.3f will print 10 spaces maxima and one zero will be added 
after the numbers after the decimal point as p = 3. In %10.3e the program will ignore the last digit
and the decimal point move between 8 and 3 since it needs 3 numbers after the decimal points. Lastly, 
%-10g would print 10 maxima spaces and the values are printed to the left while empty spaces 
are at the remaining spaces in the right.*/	
	return 0;
	//The function will not return any value as it has a void parameter//
}