//Number 5 | Printing Number With Calendar Format//

//Importing Functions//
#include <stdio.h>

//Main Function//
int main(void){

	//Declaring Variables//
	int i, num_days, start;

	//Scanning and assigning values for the number of days in a month//
	printf("\nEnter number of days in month: ");
	scanf("%d", &num_days);

	//If-else statement to check if the number of days in a month is valid or not//
	//It is Valid if the number of days is greater than 27 and less than or equal to 31//
	if (num_days <= 31 && num_days > 27){
		printf("\nNumber of Day is Valid.\n"); 
		//Scanning and Assigning Value for the starting day//
		printf("\nEnter the starting day of the week(1 = Sun, 7 = Sat: ");
		scanf("%d", &start);

		//Loops for the program//
		/*This for loop will produce spaces before the numbers depending on the value of the start variable,
		the condition of this program will compare i minus start and start minus 1 in order for them to allign
		with the other days below, loop will then increment the vaalue of i*/
		for (i = 1; i - start < start - 1; i++){
			printf("  ");
		}
		/*This for loop will output the remaining number of days*/
		for (i = 1; i <= num_days; i++){
			//
			printf("%3d ", i);//There will 2 spaces before the numbers to seperate them.
			if ((i + start - 1)% 7 == 0){ 
			/*If this condition have 0 remainder, 
			it will simply proceed to the nextline for the following processes*/
				printf("\n");
			}
		}



	}
	//If the value of days in the month exceeds the conditions//
	else{
		printf("Invalid Number of Days.");
	}

	return 0;

}