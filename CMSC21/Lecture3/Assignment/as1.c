//Lecture 3 Assignment | Number 1//

//Using functions from stdio.h and stdbool.h(for the bools)//
#include <stdio.h>
#include <stdbool.h>

//Void main function//
int main(void){

	//Declaring integer and boolean variables//
	int age; 
	bool teenager;

	//Prompting the question, scanning and assignment of value//
	printf("Enter age: ");
	scanf("%d", &age);

	//If statement that checks if value is between 13 and 19//
	{if(age >= 13 && age <= 19) 
		teenager = true; //Yields true if value is equal or in between 13 and 19.
	else
		teenager = false; //False if other wise//
	}
	//If statement that outputs a string if boolean teenager is true or otherwise(false)//
	if (teenager == true)
		printf("True, a teenager");
	else
		printf("False, not a teenager");

	return 0;
}