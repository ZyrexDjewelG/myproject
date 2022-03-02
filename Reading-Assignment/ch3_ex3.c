//Exercise 3: Adding Fractions//

//Include the functions from stdio.h library//
#include <stdio.h>

//Making a int main function with void for parameter//
int main(void)
{
/*Declaring the variables: num1 and num2 are variables for the numerator
while denom1 and denom2 are the denominator. result_num and result_denom are the results.*/	
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter first fraction"); //Print function is used to display what is requested for the user//
	scanf("%d/%d", &num1, &denom1); //Scan function is used for entering the values for the variable//
/*The conversion specification(%d) will be the values of the variable, The symbol(&) before
the variable will make the variable store the values designated to them respectively.*/

	printf("Enter second fraction: "); //Same process occur here but with different variable names.//
	scanf("%d/%d", &num2, &denom2);

/*Process and logic for adding two fractions:
The result_num and result_denom will store the result of the process between the two fractions*/
	result_num = num1 * denom2 + num2 * denom1; 
//Numerator: The product of num1 and denom2 will be added to the product of num2 and denom1//
	result_denom = denom1 * denom2;
//Denominator: Simply multiply denom1 and denom2 to get the value of result_denom	
	
	printf("The sum is %d/%d\n", result_num, result_denom);
/*Print function is used to display the results(result_num and result_denom)
by using the same method of printing string statements with corresponding variables.*/

	return 0;
	//The function will not return any value as it has a void parameter//
}