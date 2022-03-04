//Exercise 1: Running int and float//

//We begin by including the functions from stdio.h library//
#include <stdio.h>

/*A function is made, it is an int function named main with void parameter
since it does not return a value.*/

int main(void)
//Inside the function we have this process stored within the brackets.//
{
//Variables are declared the program, there two types of variables in this program(integers and floats).//	
	int i, j;
	float x, y;
//Assignment: assigning values for each variables//
	i = 10;
	j = 20;
	x = 43.2892f;
	y = 5527.0f;
/*Printing the program, two arguments are passed, one is a text string 
and others are the variables which is assigned to the conversion specification 
(either %d or %f) inside the text string*/
	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
}
