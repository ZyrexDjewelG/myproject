//CMSC 21 Assignment 2 Number 1//

//Library//
#include <stdio.h>

//Main function for the program//
int main(void)
{

	//Declaring the variables//
	int num1, num2;

	//Printing and scanning the input values//
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &num1, &num2);
	/*The first entered number will be assigned to num1 and the second
	number to num2*/

	//Printing the output//
	printf("Reversed number: %d%d", num2, num1); 
	/*The program would print the last number first before the first number
	because of how the variables are ordered outside the string.*/

	return 0;
}