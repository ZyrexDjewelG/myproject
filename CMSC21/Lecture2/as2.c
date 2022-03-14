//CMSC 21 Assignment 2 Number 2//

//Library//
#include <stdio.h>

//Main function for the program//
int main(void)
{

	//Declaring the variables//
	int num1, num2, num3;

	//Printing and scanning the input values//
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &num1, &num2, &num3);
	/*The first entered number will be assigned to num1, the second
	number to num2 and the third to num3*/

	printf("Reversed number: %d%d%d", num3, num2, num1);
	/*num3 will be printed first, followed by num2 and last is the num1
	variables thus printing out the reversed digit */

	return 0;

}	